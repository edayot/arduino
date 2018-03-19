#line 1 "c:\\Users\\eleve\\Desktop\\arduino\\arduino\\main.ino"
#line 1 "c:\\Users\\eleve\\Desktop\\arduino\\arduino\\main.ino"
//  Copyright (c) 2018 Antoine Tran Tan
//

#include "Arduino.h"

// the setup function runs once when you press reset or power the board
#line 7 "c:\\Users\\eleve\\Desktop\\arduino\\arduino\\main.ino"
void setup();
#line 12 "c:\\Users\\eleve\\Desktop\\arduino\\arduino\\main.ino"
void loop();
#line 7 "c:\\Users\\eleve\\Desktop\\arduino\\arduino\\main.ino"
void setup()
{
}

// the loop function runs over and over again forever
void loop()
{
    static int potPosition;
    potPosition = analogRead(A1);
}

