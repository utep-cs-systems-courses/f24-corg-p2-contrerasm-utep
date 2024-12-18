#include <msp430.h>
#include "switches.h"


//switches on P2
void __interrupt_vec(PORT2_VECTOR) Port_2(){

  if(P2IFG & SWITCHES) {//did a button cause the interrupt
    P2IFG &= ~SWITCHES;//clear any pending switch interrupts
    switch_interrupt_handler();// main handler for all swithces
  }
}//end of interrupt_vec
    
