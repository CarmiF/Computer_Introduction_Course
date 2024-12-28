#ifndef _bsp_H_
#define _bsp_H_

#include  <msp430.h>          // MSP430x2xx

#define  DataSegStart      0x200  //RAM
#define  CodeSegStart      0xC000   //FLASH
#define  StackTosStart     0x0400   //STACK
#define  DelayPB0PB1       0xF627   //

//#define   debounceVal      0x7FFF      
#define   debounceVal      250    
// LEDs abstraction
#define LEDsArrPort        &P1OUT
#define LEDsArrPortDir     &P1DIR
#define LEDsArrPortSel     &P1SEL


#define SWmask             0x0F

// PushButtons abstraction
#define PBsArrPort	   &P2IN
#define LEDsArrPort2       &P2OUT
#define PBsArrIntPend	   &P2IFG 
#define PBsArrIntEn	   &P2IE
#define PBsArrIntEdgeSel   &P2IES
#define PBsArrPortSel      &P2SEL 
#define PBsArrPortDir      &P2DIR 
#define PB0                0x01
#define PB1                0x02
#define PB2                0x04
#define PB3                0x08


#endif
