#ifndef _bsp_H_
#define _bsp_H_

#include  <msp430.h>          // MSP430x2xx

#define  DataSegStart      0x200  //RAM
#define  CodeSegStart      0xC000   //FLASH
#define  StackTosStart     0x0400   //STACK

#define   debounceVal      642      
#define   state2_samp_num      63    
#define LEDsArrPort        &P2OUT
// LCDs abstraction
#define LCDsArrPort        &P2OUT
#define LCDsArrPortDir     &P2DIR
#define LCDsArrPortSel     &P2SEL
#define LCD_ERSRW_pin      &P1OUT

#define del200us 210        
#define del15ms  15728
#define del5ms   5242
#define delayState1  30000

#define ENctrl 	 0x20
#define RSctrl 	 0x40
#define RWctrl 	 0x80
#define SWmask   0x0F

// PushButtons abstraction
#define PBsArrPort	   &P1IN

#define PBsArrIntPend	   &P1IFG 
#define PBsArrIntEn	   &P1IE
#define PBsArrIntEdgeSel   &P1IES
#define PBsArrPortSel      &P1SEL 
#define PBsArrPortDir      &P1DIR 
#define PB0                0x01
#define PB1                0x02
#define PB2                0x04
#define PB3                0x08


#endif
