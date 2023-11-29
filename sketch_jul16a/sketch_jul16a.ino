#include <Servo.h>
#define servo1_pin 3
Servo servo1;

void setup()
{
 Serial.begin (9600);
 servo1.attach (servo1_pin);
 pinMode(13,OUTPUT);
}

void loop()
{ 
  servo1.write(0);
  digitalWrite(13,LOW);
    while (Serial.available())
    {
        char c = Serial.read();
        Serial.print(c);
        if (c == '1')
        {
            digitalWrite(13,HIGH);
            servo1.write (66);
            delay(400);
            c='0';
            break;
        }
        }
      
  
}
