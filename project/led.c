#include <msp430.h>
#include "timerLib/libTimer.h"
#include "led.h"

void led_init(){
  P1DIR |= LEDS;
  P1OUT &= ~LED_GREEN;
  P1OUT &= ~LED_RED;
}

void green_on(){
  P1OUT ^= LED_GREEN;
  P1OUT &= ~LED_RED;
  __delay_cycles(6000);
}

void green_off(){
  P1OUT &= ~LED_GREEN;
  __delay_cycles(6000);
}

void red_on(){
  P1OUT ^= LED_RED;
  P1OUT &= ~LED_GREEN;
  __delay_cycles(500000);
}

void red_off(){
  P1OUT &= ~LED_RED;
  __delay_cycles(500000);
}

void flash(){
  P1OUT |= LED_GREEN;//turn on green
  __delay_cycles(1000000);//delay for a second
  P1OUT &= ~LED_RED; //turn off red
  __delay_cycles(1000000);
  P1OUT &= ~LED_GREEN;//turn off green
  __delay_cycles(1000000);
  P1OUT |= LED_RED;//turn on red
  __delay_cycles(1000000);
}
