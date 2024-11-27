#ifndef buzzer_included
#define buzzer_included

#define C5 523
#define E5 659
#define G5 784
#define A4 440

void buzzer_init();
void buzzer_set_period(short cycles);
void buzzer_off();
void mcdonalds_jingle();

#endif