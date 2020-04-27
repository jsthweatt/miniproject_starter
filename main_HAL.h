/*
 * main_HAL.h
 *
 *  Created on:
 *      Author:
 */

#ifndef MAIN_HAL_H_
#define MAIN_HAL_H_

#define UNPRESSED   0xFF

// MAIN PROTOTYPES

// Initialize the board. (Turn off WDT.)
void initBoard();
// Boosterpack S1 FSM
bool button1FSM(unsigned char buttonhistory);
// Boosterpack S1 FSM
bool button2FSM(unsigned char buttonhistory);

// MAIN CONSTANTS


// TODO: Create a typedef to define the main system mode.
//       DOES THE JOYSTICK affect the red Boosterpack LED or the Piezo Buzzer?


#endif /* MAIN_HAL_H_ */
