/*
 * myTimer.h
 *
 *  Created on:
 *      Author:
 */

#include <ti/devices/msp432p4xx/driverlib/driverlib.h>

#ifndef MYTIMER_H_
#define MYTIMER_H_

// TIMER32 CONSTANTS

#define TIMER0              TIMER32_0_BASE
#define TIMER0_PRESCALER    TIMER32_PRESCALER_1
#define ONESHOT             true
#define REPEAT              false
#define TIMER0_COUNT        3000                    // 1 ms for a 3 MHz clock.
#define MAX_VALUE           0xFFFFFFFF

// TIMER32 PROTOTYPES

// This function initializes and starts the indicated timer in periodic mode using the preScaler and count values given.
void initTimer(unsigned int timer, unsigned int preScaler, unsigned int count);
// This function checks for expiration of Timer0
bool timer0Expired(void);

#endif /* MYTIMER_H_ */
