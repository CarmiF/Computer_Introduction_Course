#ifndef _bsp_H_
#define _bsp_H_

#include  <msp430.h>          // MSP430x2xx

#define  DataSegStart      0x200  //RAM
#define  CodeSegStart      0xC000   //FLASH
#define  StackTosStart     0x0400   //STACK

#define   debounceVal      642      

// LCDs abstraction
#define LCDsArrPort        &P1OUT
#define LCDsArrPortDir     &P1DIR
#define LCDsArrPortSel     &P1SEL


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
#define debugLED           0x04

//LCD section
#define del200us 210        
#define del15ms  15728
#define del5ms   5242

#define ENctrl 	 0x20
#define RSctrl 	 0x40
#define RWctrl 	 0x80




#endif
