#include <Wire.h>

#define SLAVE_ADDRESS 0x08 // Set Arduino I2C address

void setup() {
  // put your setup code here, to run once:
  Wire.begin(SLAVE_ADDRESS);
  Wire.onReceive(receiveEvent);
  Wire.onRequest(requestEvent);
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
}

void receiveEvent(int howMany) {
  int inData = Wire.read();
  Serial.print("Receive:");
  Serial.println(inData);  
}

void requestEvent() {
  Wire.write("hello from arduino micro");
}
