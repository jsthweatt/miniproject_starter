#include <ti/devices/msp432p4xx/driverlib/driverlib.h>
#include "main_HAL.h"
#include "myGPIO.h"
#include "myTimer32.h"
#include "myTimerA.h"
#include "myJoystick.h"

int main(void)
{
    // TODO: Declare the variables to represent button histories for Boosterpack Buttons 1 and 2.
    //       You did this in Homework 3.

    // TODO: Declare the variables that main uses to interact with your button state machines.
    //       You did this in Homework 3.

    // TODO: Declare a variable for the main system state.

    // TODO: Declare variables to hold the values for the x and y values.

    // TODO: Declare a variable to hold the note period.

    // Stops the Watchdog timer.
    initBoard();
    // TODO: Initialize the GPIO.
    //       You did this in Homework 3.

    // TODO: Configure TA0 in Up Mode.
    //       Write this function in myTimerA.c.

    // TODO: Configure the Piezo Buzzer as a PWM output.
    //       Write this function in myTimerA.c.

    // TODO: Configure the Red Boosterpack LED as a PWM output.
    //       Write this function in myTimerA.c.

    // TODO: Initialize the ADC.
    //       Initialize the joystick pins to interface with the ADC.
    //       Start the ADC.
    //       Write these functions in myJoystick.c.

    // TODO: Configure Timer32_0 to have a 1 millisecond period.
    //       You did this in Homework 3.

    // TODO: Start TimerA_0 in UP mode.
    //       Write this function in myTimerA.c


    while(1)
    {
        // If Timer0 has expired, update the Boosterpack pushbutton histories.

        // Call the button FSMs and determine whether either button was pressed.

        // Change the main system state based on which button was pressed.

        // Get the joystick values

        // Use the system state and the joystick values to change the values of TA0CCR0, TA0CCR3, and TA0CCR4.

        }
    }
}
