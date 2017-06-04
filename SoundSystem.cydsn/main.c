#include <device.h>


// DMA = Direct Memory Access
#define AUDIO_INTERFACE (1u)
#define OUT_EP          (2u)

#define NUM_BUF         (10u)   // Elementos del buffer
#define TRANS_SIZE      (32u)   // Tamanio de la transferencia
#define BUFSIZE         (TRANS_SIZE*NUM_BUF)    // Tamanio del buffer

uint8 soundBuffer[BUFSIZE]; // Buffer del sonido
volatile uint16 outIndex = 0u;  // Indice de fin del buffer (trozo)
volatile uint16 inIndex = 0u;   // Indice del incio del buffer (trozo

volatile uint8 syncDMA = 0u;
volatile uint8 syncDMA_counter = 0u; 

uint8 VDACoutDMA_Chan;
uint8 VDACoutDMA_TD[NUM_BUF];
  
extern uint8 USBFS_DmaChan[];
extern uint8 USBFS_DmaTd[];


// rutina de tratamiento de interrupcion para incrementar 
// el puntero del buffer de salida y la sincronizacion con el DMA

CY_ISR(DMA_done)
{
    if(++outIndex >= NUM_BUF)
    {
        outIndex = 0u;
    }
    
    // Si el reloj interno es mas rapido que las transacciones del PC
    //se desabilita el canal del VDAC para que no saque nada
    
    if(outIndex == inIndex)
    {
        // Para el DMA 
        CyDmaChDisable(VDACoutDMA_Chan);
        // Resincroniza el DMA y espera a que se rehanbilite el DMA del DAC (Digital to Analog Conversor)
        syncDMA = 0u;
        syncDMA_counter = 0u;
    }
    
    
    
}


// Se hace la sincronizacion software
void main()
{
    uint8 i;
    uint8 skip_next_OUT = 0;
    
    VDAC8_Start();
    //VDAC8_1_Start();
    
    // Cuando el DMA del buffer haya finalizado nos vamos a DMA_done
    VDACoutDMA_done_isr_StartEx(DMA_done);
    
   
    LCD_Start();
    //LCD_PrintString("USB->DMA->DAC");
    LCD_PrintString("Pepito Sound");
    
    
    
    
    
    
    
    
    // Inicializacion del DMA
    // Desde la memoria buffer del DAC del USB al VDAC
   /* DMA Configuration for VDACoutDMA (Memory to VDAC) */
    #define VDACoutDMA_BYTES_PER_BURST      1
    #define VDACoutDMA_REQUEST_PER_BURST    1
    #define VDACoutDMA_DST_BASE             (CYDEV_PERIPH_BASE)
    #if (defined(__C51__))          /* PSoC 3 - Source is SRAM */
        #define VDACoutDMA_SRC_BASE         (CYDEV_SRAM_BASE)
    #else                           /* PSoC 5 */
        #define VDACoutDMA_SRC_BASE         (soundBuffer)
    #endif  /* End C51 */  
    
    // Primer argumento: cuantos bytes se transfieren a la vez -> 1 byte
    // Segundo argumento: Cuantos bytes se trasnfierene en una peticion -> 1 Byte
    // Direccion de la fuente (los 16 bits mas significativos (HI16) 
    // Direccion del destino (los 16 bist mas significativos (H16)
    
    VDACoutDMA_Chan = VDACoutDMA_DmaInitialize(VDACoutDMA_BYTES_PER_BURST, VDACoutDMA_REQUEST_PER_BURST, 
                                     HI16(VDACoutDMA_SRC_BASE), HI16(VDACoutDMA_DST_BASE));
    
    // Para cada elemento del buffer, reservo memoria
    for (i = 0u; i < NUM_BUF; i++) 
    {
        VDACoutDMA_TD[i] = CyDmaTdAllocate();
    }    
    
    
    // Para cada buffer le cambio la configuracion
    for (i = 0u; i < (NUM_BUF-1); i++) 
    {
        CyDmaTdSetConfiguration(VDACoutDMA_TD[i], TRANS_SIZE, VDACoutDMA_TD[i+1], TD_INC_SRC_ADR | 
                                                                                  VDACoutDMA__TD_TERMOUT_EN);
    }
    
    
    CyDmaTdSetConfiguration(VDACoutDMA_TD[NUM_BUF-1], TRANS_SIZE, VDACoutDMA_TD[0], TD_INC_SRC_ADR | 
                     
    
    
    VDACoutDMA__TD_TERMOUT_EN);
    for (i = 0u; i < NUM_BUF; i++) 
    {
        // Establecemos las direcciones
        CyDmaTdSetAddress(VDACoutDMA_TD[i], LO16((uint32)&soundBuffer[TRANS_SIZE*i]), LO16((uint32)VDAC8_Data_PTR));
    } 
    
    
    // Establece el canal inicial(Manejador del canal, Manejador del TD)
    CyDmaChSetInitialTd(VDACoutDMA_Chan, VDACoutDMA_TD[0]);

    
    
    
    
    CyGlobalIntEnable;  /* enable global interrupts. */

    /* Start USBFS Operation with 3V operation */
    USBFS_Start(0, USBFS_3V_OPERATION);   
    /* Wait for Device to enumerate */
    while(!USBFS_GetConfiguration());    

    
    
    
    // De forma repetitiva hace:
    // 1. Comprobamos si no ha cambiado la configuracion del USB
        // 2. Comprobamosque se obtenga la configuracion y la interfaz sea de audio (Sirve para reiniciar el audio y la configuracion)
           // Indice entrada = 0
            //Indice salida = 0
            // Sincronizacion del DMA = 0
            // Sincronizador del DMA contado = 0
    
    
        // Si Se ha llenado el buffer del USB
            // 

    for(;;)
    {

        if(USBFS_IsConfigurationChanged() != 0u) 
        {
            // ¿Se ha cambiado algo de la configuracion del USB?
            if((USBFS_GetConfiguration() != 0u) && (USBFS_GetInterfaceSetting(AUDIO_INTERFACE) != 0u))
            {   
                
                inIndex = 0u;
                outIndex = 0u;
                syncDMA = 0u;
                syncDMA_counter = 0u;
                skip_next_OUT = 0u;
                USBFS_EnableOutEP(OUT_EP);
                LCD_Position(1,0);
                LCD_PrintString("System: Bistecs");
                //LCD_PrintString("Audio ON ");
            }    
            else // Cuando esta en mute o no sale audio
            {
                LCD_Position(1,0);
                LCD_PrintString("Audio OFF");
            }
        }
        if (USBFS_GetEPState(OUT_EP) == USBFS_OUT_BUFFER_FULL)
        {
            if(skip_next_OUT == 0u)
            {
                /* Read OUT_EP using DMA */
                // Lee OUT_EP usando el acceso directo a memoria y lo deja en soundBuffer[inIndex*TransSize]
                USBFS_ReadOutEP(OUT_EP, &soundBuffer[inIndex*TRANS_SIZE], TRANS_SIZE); // Lectura por usb 
                leyendoDelUSB_Write(~leyendoDelUSB_Read());
                if(++inIndex >= NUM_BUF)
                {
                    inIndex = 0u;
                }
                syncDMA_counter++;
            }
            else 
            {
                // Se salta la transferencia
                USBFS_EnableOutEP(OUT_EP);
                skip_next_OUT = 0u;
            }
            
            // Si el infice de salida coincide con el de entrada es porque el 
            // relok interno es menos veloz que el trafico que genera el PC
            if(outIndex == inIndex)
            {
                // Asi que se salta ese tramo de transferencia
                skip_next_OUT = 1u;
                outindexinIndex_Write(~outindexinIndex_Read());
                
            }
        }
        
        // Si esta correctamente sincronizado, le pasamos al canal DMA el canal del VDAC con 1 bit
        // Sólo entra cuando se ha empezado a transmitir el audio y cuando se corta
        if((syncDMA == 0) && (syncDMA_counter >= (NUM_BUF/2)))
        {
            CyDmaChEnable(VDACoutDMA_Chan, 1);
            syncDMA = 1u;
            
            interrupcionDMA_Write(~interrupcionDMA_Read());
        }    
    }
}


/* [] END OF FILE */
