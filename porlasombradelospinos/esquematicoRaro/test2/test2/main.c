//----------------------------------------------------------------------------
// C main line
//----------------------------------------------------------------------------

#include <m8c.h>        // part specific constants and macros
#include "PSoCAPI.h"    // PSoC API definitions for all User Modules
#include "delay.h" 
#include "stdlib.h"

INT  iData; 
int nADCdata, nf_50_data, nf_50_data1, nf_50_data2, nf_50_data3, nf_50_data4, nf_50_data5, hpf_data; 
first_af = TRUE;
int nf_50 (int x) // second order nitch filter f = 50 hz 
{ 
  static long xn_1, xn_2, yn_1, yn_2;
  long diff1;
  int y;
  diff1 = (x + xn_2) <<16;   // 0.5 + 0.25  * 65536
  y = ((diff1>>1) + (diff1>>2) + 87301*(xn_1 - yn_1) - ((yn_2<<16)>>1) )>>16;
  xn_2 = xn_1;
  xn_1 = x;
  yn_2 = yn_1;
  yn_1 = y;
  return y;
}

//----------------------------------------------------------
int nf1_50 (int x) // second order nitch filter f = 50 hz 
{ 
  static long xn1_1, xn1_2, yn1_1, yn1_2;
  long diff1;
  int y;
  diff1 = (x + xn1_2) <<16;   // 0.5 + 0.25  * 65536
  y = ((diff1>>1) + (diff1>>2) + 87301*(xn1_1 - yn1_1) - ((yn1_2<<16)>>1) )>>16;
  xn1_2 = xn1_1;
  xn1_1 = x;
  yn1_2 = yn1_1;
  yn1_1 = y;
  return y;
}

//----------------------------------------------------------
int nf2_50 (int x) // second order nitch filter f = 50 hz 
{ 
  static long xn2_1, xn2_2, yn2_1, yn2_2;
   long diff1;
  int y;
  diff1 = (x + xn2_2) <<16;   
  y = ((diff1>>1) + (diff1>>2) + 87301*(xn2_1 - yn2_1) - ((yn2_2<<16)>>1) )>>16;
  xn2_2 = xn2_1;
  xn2_1 = x;
  yn2_2 = yn2_1;
  yn2_1 = y;
  return y;
}
//----------------------------------------------------------
int nf3_50 (int x) // second order nitch filter f = 50 hz 
{ 
  static long xn3_1, xn3_2, yn3_1, yn3_2;
   long diff1;
  int y;
  diff1 = (x + xn3_2) <<16;   
  y = ((diff1>>1) + (diff1>>2) + 87301*(xn3_1 - yn3_1) - ((yn3_2<<16)>>1) )>>16;
  xn3_2 = xn3_1;
  xn3_1 = x;
  yn3_2 = yn3_1;
  yn3_1 = y;
  return y;
}

int nf4_50 (int x) // second order nitch filter f = 50 hz 
{ 
  static long xn4_1, xn4_2, yn4_1, yn4_2;
   long diff1;
  int y;
  diff1 = (x + xn4_2) <<16;   
  y = ((diff1>>1) + (diff1>>2) + 87301*(xn4_1 - yn4_1) - ((yn4_2<<16)>>1) )>>16;
  xn4_2 = xn4_1;
  xn4_1 = x;
  yn4_2 = yn4_1;
  yn4_1 = y;
  return y;
}

int nf5_50 (int x) // second order nitch filter f = 50 hz 
{ 
  static long xn5_1, xn5_2, yn5_1, yn5_2;
   long diff1;
  int y;
  diff1 = (x + xn5_2) <<16;   
  y = ((diff1>>1) + (diff1>>2) + 87301*(xn5_1 - yn5_1) - ((yn5_2<<16)>>1) )>>16;
  xn5_2 = xn5_1;
  xn5_1 = x;
  yn5_2 = yn5_1;
  yn5_1 = y;
  return y;
}

int median_filter(unsigned int *x)
{
unsigned int k; // current element of array
unsigned int buf;// buffer for rearrangements of elements of array 
BOOL changed = TRUE; // TRUE, if in the current cycle the rearrangements are occured
// array sorting

while (changed){
				changed = FALSE; // let there are no rearrangements in the current cycle
				for (k=0; k<=9; k++)
									{  
									if (x[k+1] < x[k]) {  // rearrangement of k and k+1 elements
  														buf = x[k];
  														x[k] = x[k+1];
  														x[k+1] = buf;
  														changed = TRUE;
  				   										}
  				   					}
				}
			
return (x[5]);
}

//----------------------------------------------------------
int af (int xa) // four order averaging filter   
{ 
  unsigned int ya = 0;
  static unsigned int x_af_1;
  if (first_af) { x_af_1 = xa; first_af = FALSE;}
  ya = (xa + x_af_1) >> 1;
  x_af_1 = xa;
  return ya;
}

//----------------------------------------------------------
int af2 (int xa) // two order averaging filter   
{ 
 unsigned int ya = 0;
 static unsigned int x_af2_1;
 ya = (xa + x_af2_1) >> 1;
 x_af2_1 = xa;
 return ya;
}

int hpf1 (int x) // first order high pass filter f = 30 hz  (differentiator)
{ 
  static long x_hpf1_1, y_hpf1_1;
  long diff1;
  int y;
  diff1 = (x - x_hpf1_1 ) << 16;
  diff1 = diff1 >> 1;
  y = (diff1 + (y_hpf1_1 << 10)) >> 16;
  x_hpf1_1 = x;
  y_hpf1_1 = y;
  return y;
}

float fVolts;			// Variable that stores the converted voltage value
float fScaleFactor;		// Variable that stores the volts/count scale factor
char *pResult;			// Pointer used to store the result returned by ftoa function
int iStatus;

void main(void)
{
	LED_Start();

   LED_Switch(1); 
      
    UART_CmdReset();                      // Initialize receiver/cmd  
                                          // buffer  
    UART_IntCntl(UART_ENABLE_RX_INT);     // Enable RX interrupts  
          
    UART_Start(UART_PARITY_NONE);         // Enable UART  
      
    M8C_EnableGInt ;                      // Enable Global Interrupts   
	
	PGA_1_Start(PGA_1_HIGHPOWER);
	
   ADCINC_Start(ADCINC_HIGHPOWER);       // Apply power to the SC Block   
   ADCINC_GetSamples(0);
         
 UART_CPutString("uruchomienie");
 fScaleFactor = (float)5/(float)16384;
    for(;;) {  
	 
     while(ADCINC_fIsDataAvailable() == 0)  // Loop until value ready   
		nADCdata=ADCINC_iGetData();                   
     	 nf_50_data = nf_50(nADCdata); // 50 Hz suppression 
   nf_50_data1 = nf1_50(nf_50_data); 
   nf_50_data2 = nf2_50(nf_50_data1);
   nf_50_data3 = nf3_50(nf_50_data2);
   nf_50_data4 = nf4_50(nf_50_data3);
   nf_50_data5 = nf5_50(nf_50_data4);          
				
				
		ADCINC_fClearFlag();		
				
		fVolts = fScaleFactor*(float)hpf1(af(nf_50_data5));
		pResult = ftoa(fVolts,&iStatus );
				
            // UART_PutSHexInt(nf_50_data5);
	UART_CPutString("E");
			UART_PutString(pResult);
	UART_CPutString("\n");
			// UART_CPutString("\n\r");

	 
		
      
   }  

}
