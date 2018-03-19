//  Copyright (c) 2018 Antoine Tran Tan
//

#include "Arduino.h"

// the setup function runs once when you press reset or power the board
void setup()
{
}

// the loop function runs over and over again forever
void loop()
{
    static int potPosition;
    potPosition = analogRead(A1);

    if (potPosition > 0 && potPosition <=150)
    {

    }

    if (potPosition > 150 && potPosition <= 300)
    {

    }

    if (potPosition > 300 && potPosition <= 450)
    {

    }

    if (potPosition > 450 && potPosition <= 600)
    {

    }

    if (potPosition > 600 && potPosition <= 750)
    {

    }

    if (potPosition > 750 && potPosition <= 900)
    {

    }

    if(potPosition > 900)
    {
        
    }
}
