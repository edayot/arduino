# 1 "c:\\Users\\eleve\\Desktop\\erwan\\erwan-arduino\\main.ino"
# 1 "c:\\Users\\eleve\\Desktop\\erwan\\erwan-arduino\\main.ino"
//  Copyright (c) 2018 Antoine Tran Tan
//

# 5 "c:\\Users\\eleve\\Desktop\\erwan\\erwan-arduino\\main.ino" 2

// the setup function runs once when you press reset or power the board
void setup()
{
    pinMode(13, (0x1));
}

// the loop function runs over and over again forever
void loop()
{
    static int potPosition;

    potPosition = analogPead(A0);


    digitalWrite(13, (0x1));
    delay(potPosition);
    digitalWrite(13, (0x0));
    delay(potPosition);
}
