/*
 * myTimerA.h
 *
 *  Created on:
 *      Author:
 */

// TIMERA PROTOTYPES

// This function configures Timer A0 in Up mode.
void configureTA0UpMode(void);
// This function configures the Red Boosterpack LED to receive PWM signals.
void configureLED(void);
// This function configures the Piezo Buzzer to receive PWM signals.
void configureBuzzer(void);
// This function starts Timer A0 in Up mode.
void startTimerA0(void);
// Change TA0CCR0 to the passed value.
void changeTA0CCR0(unsigned int value);
// Change TA0CCR3 to the passed value.
void changeTA0CCR3(unsigned int value);
// Change TA0CCR4 to the passed value.
void changeTA0CCR4(unsigned int value);

#ifndef MYTIMERA_H_
#define MYTIMERA_H_

#endif /* MYTIMERA_H_ */
