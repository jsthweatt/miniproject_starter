/*
 * main_HAL.c
 *
 *  Created on: Apr 26, 2020
 *      Author: J.S. Thweatt
 */

#include <ti/devices/msp432p4xx/driverlib/driverlib.h>

void initBoard()
{
    WDT_A_hold(WDT_A_BASE);
}

// TODO: FSM for detecting Launchpad Button 1 press.
//       You wrote this function in Homework 3.
bool button1FSM(unsigned char buttonhistory)
{

}

// TODO: FSM for detecting Launchpad Button 2 press.
//       Each functions needs to track a separate static variable.
bool button2FSM(unsigned char buttonhistory)
{

}
