/*
 * myJoystick.c
 *
 *  Created on:
 *      Author:
 */

#include <ti/devices/msp432p4xx/driverlib/driverlib.h>

// TODO: Initialize the ADC.
//       This function is given to you in the lecture slides.
void initADC(void)
{

}

// TODO: Initialize the Joystick GPIO.
//       This function is given to you IN PART in the lecture slides.
void initJoystick(void)
{
    // ADC_MEM0 is used to hold values sampled from the x-axis channel.

    // Write code to repeat the init for the y-axis channel.

}

// TODO: Start the ADC.
//       This function should ONLY contain the code to enable the conversion and toggle the conversion trigger.
//
void startADC(void)
{

}

// TODO: Get the most recent values for the x-axis and y-axis.
//       Since the ADC is running continuously, there is NO NEED to check the busy flag.
//       A function cannot return two values, so we are passing the addresses of the x and y variables.
//       Get the result from the memory buffer for each axis, and set it equal to that variable.
void getJoystickValues(unsigned int *x, unsigned int *y)
{

}
