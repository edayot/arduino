# 1 "c:\\Users\\eleve\\Desktop\\arduino\\arduino\\main.ino"
# 1 "c:\\Users\\eleve\\Desktop\\arduino\\arduino\\main.ino"
//  Copyright (c) 2018 Antoine Tran Tan
//

# 5 "c:\\Users\\eleve\\Desktop\\arduino\\arduino\\main.ino" 2

// the setup function runs once when you press reset or power the board
void setup()
{
}

// the loop function runs over and over again forever
void loop()
{
    static int potPosition;
    potPosition = analogRead(A1);
}
