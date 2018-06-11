//  Copyright (c) 2018 Antoine Tran Tan
//

#include "Arduino.h"
#include "include/timer.h"
#include "include/Grove_I2C_Motor_Driver.h"
#include "include/Ultrasonic.h"

#define I2C_ADDRESS 0x0A

/// The class fsm_state is a type whose value is restricted to a
/// subset of values
enum class fsm_state
{
    s0,
    s1
};

// Declaration of a variable of type fsm_state
fsm_state my_state = fsm_state::s0;

Ultrasonic ultrasonic(2);

void setup()
{

    // Make the function automate() being called
    // every 1000 microseconds
    set_timer4_interrupt(1000, automate);
    Motor.begin(I2C_ADDRESS);
}

void automate()
{
    static int ms = 0;

    // Update the state only every 1000 function calls
    if (ms == 999)
    {
        ms = 0;

        static long RangeInCentimeters;

        RangeInCentimeters = ultrasonic.MeasureInCentimeters(); // two measurements should keep an interval
        delay(250);

        // Manage the state transitions from the state value
        switch (my_state)
        {
            case fsm_state::s0:

                Motor.speed(MOTOR1, 50);
                Motor.speed(MOTOR2, -70);

                if(RangeInCentimeters < 5)
                {
                    my_state = fsm_state::s1;
                }

                break;

            case fsm_state::s1:

                Motor.stop(MOTOR1);
                Motor.stop(MOTOR2);

                if (RangeInCentimeters >= 5)
                {
                    my_state = fsm_state::s0;
                }

                break;
        }
    }
    else
    {
        ms++;
    }
}



void loop()
{

}
