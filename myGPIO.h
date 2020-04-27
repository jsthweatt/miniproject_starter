/*
 * myGPIO.h
 *
 *  Created on:
 *      Author:
 *
 */

// YOU MAY ADD OTHER GPIO FUNCTIONS AS NEEDED FOR CODE TESTING.
// ADD THE CODE TO myGPIO.c.

#ifndef MYGPIO_H_
#define MYGPIO_H_

// GPIO PROTOTYPES

// This function initializes the GPIO used in the program.
void initGPIO();
// This function returns the value of Boosterpack S1.
unsigned char checkStatus_BoosterpackS1();
// This function returns the value of Boosterpack S2.
unsigned char checkStatus_BoosterpackS2();

#endif /* MYGPIO_H_ */
