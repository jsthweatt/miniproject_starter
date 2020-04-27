/*
 * myTimerA.c
 *
 *  Created on:
 *      Author:
 */

#include <ti/devices/msp432p4xx/driverlib/driverlib.h>

// TODO: Declare a TimerA UP MODE struct as defined in timer_a.h.
//       For a 3 MHz SMCLK, set CCR0 to establish a 1 kHz counter frequency.
//       DISABLE all interrupts, and skip clear.
Timer_A_UpModeConfig UpModeConfig =
{
    // SMCLK Clock Source = 3MHz
    // Prescale = 1
    // Give CCR0 the value for a 1 kHz period
    // Disable Timer A interrupts
    // Disable CCR0 Capture/Compare interrupts
    // Do not reset Timer A parameters
 };

// TODO: Declare a TimerA COMPARE MODE struct for CCR3 as defined in timer_a.h.
//       For a 3 MHz clock and a 1 millisecond period, set CCR3 for a 50% initial duty cycle on the LED.
//       Disable all interrupts.
Timer_A_CompareModeConfig ledCompareModeConfig =
{
    // CCR3 for Boosterpack Red LED
    // Disable Capture/Compare Interrupts
    // Choose an output mode to create a pulse that changes appropriately at CCR3 and CCR0 matches.
    // Choose a starting value for CCR3 so that the 1 kHz PWM signal has a 50% duty cycle
};

// TODO: Declare a TimerA COMPARE MODE struct for CCR 4 as defined in timer_a.h.
//       Set CCR4 = 0 to turn the Piezobuzzer off at start.
//       Disable all interrupts.
Timer_A_CompareModeConfig buzzerCompareModeConfig =
{
    // CCR4 for Piezo Buzzer
    // Disable Capture/Compare Interrupts
    // Choose an output mode to create a pulse that changes appropriately at CCR4 and CCR0 matches.
    // Starting value for CCR4 = 0 - it should be turned off at the program's start.
};

// TODO: Configure TA0 in Up mode using the Up mode config written above.
void configureTA0UpMode(void)
{
    // Configure Timer A0 in UP Mode.

}

// TODO: Configure the Red Boosterpack LED to receive PWM signals using CCR3.
void configureLED(void)
{
    // Set the Red Boosterpack LED as an output.
    // Turn the LED OFF to begin.
    // This is similar to what you did in Homework 3.

    // Interface the TimerA output to this pin.
    // This is similar to what you did to configure the UART Tx and Rx pins in Homework 4.

    // Configure TA0.3 block for output in COMPARE Mode.
}

// TODO: Configure the Piezo Buzzer to receive PWM signals using CCR4.
void configureBuzzer(void)
{
    // Set the Piezo Buzzer as an output.
    // Turn the Piezo Buzzer OFF to begin.
    // This is similar to what you did in Homework 3.

    // Interface the TimerA output to this pin.
    // This is similar to what you did to configure the UART Tx and Rx pins in Homework 4.

    // Configure TA0.4 block for output in COMPARE mode.
}
// TODO: Start Timer A0 in UP Mode.
void startTimerA0(void)
{
    // Start Timer A0 in UP mode.
}

// TODO: Set CCR0 on TA0 equal to the passed value.
void changeTA0CCR0(unsigned int value)
{
    // Use register reference TA0CCR0 as the target of the new value.
}

// TODO: Set CCR3 on TA0 equal to the passed value.
void changeTA0CCR3(unsigned int value)
{
    // Use register reference TA0CCR3 as the target of the new value.
}

// TODO: Set CCR4 on TA0 equal to the passed value.
void changeTA0CCR4(unsigned int value)
{
    // TODO: Use register reference TA0CCR4 as the target of the new value.
}
