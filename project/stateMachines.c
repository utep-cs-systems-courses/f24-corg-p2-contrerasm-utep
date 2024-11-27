#include <msp430.h>
#include "stateMachines.h"
#include "led.h"
#include "buzzer.h"
#include "switches.h"

void next_state(int state){
  green_off();
  red_off();
  switch(state){
  case 1://turns off both lights
    red_off();
    green_off();
    break;
  case 2://flashes red and green
    flash(5);
    break;
  case 3://plays jingle
    red_on();
    mcdonalds_jingle();
    red_off();
    break;
  case 4:
    green_on();
    red_off();
    break;
  default:
    red_on();
    break;
  }
  red_on();//light will remain on to let user know its ready

}
