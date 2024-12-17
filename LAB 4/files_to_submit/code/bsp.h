#ifndef _bsp_H_
#define _bsp_H_

#include  <msp430.h>          // MSP430x2xx
// #include  <msp430xG46x.h>  // MSP430x4xx

#define  DataSegStart      0x200
#define  CodeSegStart      0xC000
#define  StackTosStart     0x0400

#define   debounceVal      250
#define   delay62_5ms      0xFFFF
#define   compleateTo0_5sec      0xAAA3

// LEDs abstraction
#define LEDsArrPort        &P1OUT
#define LEDsArrPortDir     &P1DIR
#define LEDsArrPortSel     &P1SEL

// Switches abstraction
#define SWsArrPort         &P2IN
#define SWsArrPortDir      &P2DIR
#define SWsArrPortSel      &P2SEL
#define SWmask             0x0F

// PushButtons abstraction
#define PBsArrPortSel      &P2SEL 
#define PBsArrPortDir      &P2DIR 
#define PBsArrIntEdgeSel   &P2IES

#define PBsArrIntEn	   &P2IE
#define PBsArrIntPend	   &P2IFG
#define PBsArrPort	   &P2IN 
 




#define PB0                0x01
#define PB1                0x02
#define PB2                0x04


#endif



