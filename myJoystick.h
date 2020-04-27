/*
 * myJoystick.h
 *
 *  Created on:
 *      Author:
 */

#ifndef MYJOYSTICK_H_
#define MYJOYSTICK_H_

// ADC/JOYSTICK PROTOTYPES

// Initialize the ADC.
void initADC(void);
// Initialize the joystick GPIO.
void initJoystick(void);
// Start the ADC.
void startADC(void);
// Get the x and y values.
void getJoystickValues(unsigned int *x, unsigned int *y);

#endif /* MYJOYSTICK_H_ */
