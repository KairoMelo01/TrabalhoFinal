// C++ code
//

#include<Arduino.h>
void setup()
{
pinMode(13, OUTPUT);//LedVerde
pinMode(12, OUTPUT);//LedAmarelo
pinMode(11, OUTPUT);//LedVermelho
pinMode(8, OUTPUT);//Motor
pinMode(6, INPUT_PULLUP);//Botao
}

void loop()
{
  if (digitalRead(6)==LOW) {
  	digitalWrite(11,HIGH);
  	delay(1000);
  	digitalWrite(11,LOW);
  
  	digitalWrite(12,HIGH);
  	delay(1000);
  	digitalWrite(12,LOW);
  
  	digitalWrite(13,HIGH);
  	delay(1000);
  	digitalWrite(13,LOW);
  
  	digitalWrite(8,HIGH); 
    delay(10000);
    digitalWrite(8,LOW);
  }
  
  else {
    digitalWrite(13,LOW);
  	digitalWrite(12,LOW);
  	digitalWrite(11,LOW);
  	digitalWrite(8,LOW);
  }
  }