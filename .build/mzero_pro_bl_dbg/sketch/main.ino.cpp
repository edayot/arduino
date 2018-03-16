#line 1 "c:\\Users\\eleve\\Desktop\\erwan\\erwan-arduino\\main.ino"
#line 1 "c:\\Users\\eleve\\Desktop\\erwan\\erwan-arduino\\main.ino"
//  Copyright (c) 2018 Antoine Tran Tan
//

#include "Arduino.h"

// the setup function runs once when you press reset or power the board
#line 7 "c:\\Users\\eleve\\Desktop\\erwan\\erwan-arduino\\main.ino"
void setup();
#line 13 "c:\\Users\\eleve\\Desktop\\erwan\\erwan-arduino\\main.ino"
void loop();
#line 7 "c:\\Users\\eleve\\Desktop\\erwan\\erwan-arduino\\main.ino"
void setup()
{
    pinMode(13, OUTPUT);
}

// the loop function runs over and over again forever
void loop()
{
    static int potPosition;

    potPosition = analogPead(A0);


    digitalWrite(13, HIGH);
    delay(potPosition);
    digitalWrite(13, LOW);
    delay(potPosition);
}

