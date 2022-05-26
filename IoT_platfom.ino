
#include "thingProperties.h"
#define ledpin1 D5
#define ledpin2 D6
#define ledpin3 D7
#define ledpin4 D8
#define ledpin5 21

void setup() {

pinMode(ledpin1,OUTPUT);
pinMode(ledpin2,OUTPUT);
pinMode(ledpin3,OUTPUT);
pinMode(ledpin4,OUTPUT);
pinMode(ledpin5,OUTPUT);


  Serial.begin(9600);
  delay(1500); 

  // Defined in thingProperties.h
  initProperties();

  // Connect to Arduino IoT Cloud
  ArduinoCloud.begin(ArduinoIoTPreferredConnection);
  
  /*
     The following function allows you to obtain more information
     related to the state of network and IoT Cloud connection and errors
     the higher number the more granular information you’ll get.
     The default is 0 (only errors).
     Maximum is 4
 */
  setDebugMessageLevel(2);
  ArduinoCloud.printDebugInfo();
}

void loop() {
  ArduinoCloud.update();
  // Your code here 
  
  
}

void onLed1Change()  {
  if (led1 == 1){
    digitalWrite(ledpin1,HIGH);
  }else{
    digitalWrite(ledpin1,LOW);
  }
}

void onLed2Change()  {
  if (led2 == 1){
    digitalWrite(ledpin2,HIGH);
  }else{
    digitalWrite(ledpin2,LOW);
  }
}

void onLed3Change()  {
  if (led3 == 1){
    digitalWrite(ledpin3,HIGH);
  }else{
    digitalWrite(ledpin3,LOW);
  }
}

void onLed4Change()  {
  if (led4 == 1){
    digitalWrite(ledpin4,HIGH);
  }else{
    digitalWrite(ledpin4,LOW);
  }
}
void onLed5Change()  {
  if (led5 == 1){
    digitalWrite(ledpin5,HIGH);
  }else{
    digitalWrite(ledpin5,LOW);
  }
}
