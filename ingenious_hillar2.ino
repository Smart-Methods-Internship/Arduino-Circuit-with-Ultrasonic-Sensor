#include <Servo.h>
#define maxdistance 100
#include <SoftwareSerial.h>

Servo srv1;
Servo srv2;
Servo srv3;
Servo srv4;
Servo srv5;
Servo srv6;

void setup()
{
  Serial.begin(9600);
  pinMode(9, OUTPUT);
  pinMode(8, INPUT);
  
  srv1.attach(2);
  srv2.attach(3);
  srv3.attach(4);
  srv4.attach(5);
  srv5.attach(6);
  srv6.attach(7);
}

void loop()
{
  digitalWrite(9, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(9, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(9, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
  int d=pulseIn(8,HIGH);
  d=d/29/2;
  
  if(d<=maxdistance)
  {
    srv1.write(90);
    srv2.write(90);
    srv3.write(90);
    srv4.write(90);
    srv5.write(90);
    srv6.write(90);
    delay(1000);
  }
  
  else
  {
    delay(1000);
    srv1.write(0);
    srv2.write(0);
    srv3.write(0);
    srv4.write(0);
    srv5.write(0);
    srv6.write(0);
  }
}