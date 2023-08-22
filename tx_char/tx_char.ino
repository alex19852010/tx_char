#include <SoftwareSerial.h>

SoftwareSerial myserial(10, 11);
int led = 7;




void setup() {
  Serial.begin(9600);
  myserial.begin(9600);
  pinMode(led, OUTPUT);
  
}

void loop() {
  
if(myserial.available())
{
  char data = myserial.read();
  Serial.print("data is: ");
  Serial.println(data);

  if(data == '1')
  {
    digitalWrite(led, HIGH);
    Serial.println("led ON");
  }

  if(data == '0')
  {
    digitalWrite(led, LOW);
    Serial.println("led OFF");
  }
  
}
}
