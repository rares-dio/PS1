/*
 * timer1.h
 *
 * Created: 11/8/2016 8:15:54 PM
 *  Author: didi
 */ 

#include <time.h>
#include <avr/interrupt.h>

#ifndef TIMER1_H_
#define TIMER1_H_

void timer1_1s();
ISR(TIMER1_COMPA_vect);


#endif /* TIMER1_H_ */