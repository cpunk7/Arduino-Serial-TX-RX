// Created by Nick Kamm - Copyright 2017
//for instructions:  http://nickkamm.com/send-integer-values-from-arduino-to-arduino-via-serial/
// Wiring: Sending arduino to Receiving arduio:
// TX -->  RX
// GND --> GND

int x = 249;
int y = 0;
void setup() {
  Serial.begin(9600);
}

void loop() {
  
while(x < 255){
x = x + 1; // counts up 
y = y + 1;

Serial.write(x); // x is sent first, acceptable range: 250-255 to set channel. Must be sent first.
Serial.write(y); // y is channel value, acceptable range: 0-249; 
delay(100);

if(x == 255){  // code to reset count
  x = 249;
  delay(200);
 }
 if(y == 249){ // code to reset count
   y = 0;
 }
}
}
