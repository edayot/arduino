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
    if (ms == 99)
    {
        ms = 0;

        static long RangeInCentimeters;

        RangeInCentimeters = ultrasonic.MeasureInCentimeters(); // two measurements should keep an interval

        // Manage the state transitions from the state value
        if (RangeInCentimeters >= 5)
        {
            my_state = fsm_state::s0;
        }
        else if (RangeInCentimeters < 5)
        {
            my_state = fsm_state::s1;
        }
        else if RangeInCentimeters < 4)
        {
            my_state = fsm_state::s2;
        }
        else if (RangeInCentimeters < 3)
        {
            my_state = fsm_state::s3;
        }
        else if (RangeInCentimeters < 3)
        {
            my_state = fsm_state::s4;
        }
    }
    else
    {
        ms++;
    }
}



void loop()
{
    switch (my_state)
    {
    case fsm_state::s0:

        Motor.speed(MOTOR1, -50);
        Motor.speed(MOTOR2, 50);

        break;

    case fsm_state::s1:

        Motor.speed(MOTOR1, -40);
        Motor.speed(MOTOR2, 40);

        break;
    }
    case fsm_state::s2:

        Motor.speed(MOTOR1, -30);
        Motor.speed(MOTOR2, 30);

        break;
    case fsm_state::s3:

        Motor.speed(MOTOR1, -20);
        Motor.speed(MOTOR2, 20);

        break;
    case fsm_state::s4:

        Motor.speed(MOTOR1, -10);
        Motor.speed(MOTOR2, 10);

        break;
    case fsm_state::s5:

        Motor.stop(MOTOR1);
        Motor.stop(MOTOR2);

        break;
}   
}
