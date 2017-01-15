// Created by Nick Kamm - Copyright 2017
//for instructions:  http://nickkamm.com/send-integer-values-from-arduino-to-arduino-via-serial/


void setup() {
  Serial.begin(9600);
}

void loop() {
int chan250, chan251, chan252, chan253, chan254, chan255;
while (Serial.available() > 0) // only runs if data is on the serial buffer
 {
byte inbyte =  Serial.read(); // incoming byte
 
 /* 
 // use this to print out the value of inbyte in the serial monitor
  int x = inbyte;
      Serial.print("inbyte: ");
      Serial.println(x);
 */
 
delay(5); // delay to read next byte. Send delay should be slightly longer


// This function accepts byte = Serial.read(), integers only (0-255). 250-255 are the channel ranges.  Switch/Case is a default Arduino function
// Serial protocol: Channel No. (250-255) followed by position (0-249);
 switch(inbyte)
  {
    case 250 :
      chan250 = Serial.read(); // reads next byte into variable, expects INT range: 0-249
      Serial.print("chan250: ");
      Serial.println(chan250);
      break;
    case 251 :
      chan251 = Serial.read();
      Serial.print("chan251: ");
      Serial.println(chan251);
      break;    
    case 252 :
      chan252 = Serial.read();
      Serial.print("chan252: ");
      Serial.println(chan252);
      break;     
    case 253 :
      chan253 = Serial.read();
      Serial.print("chan253: ");
      Serial.println(chan253);
      break;     
    case 254 :
      chan254 = Serial.read();
      Serial.print("chan254: ");
      Serial.println(chan254);
      break;      
    case 255 :
      chan255 = Serial.read();
      Serial.print("chan255: ");
      Serial.println(chan255);
      break;      
     default : 
     int y; // something for default to do so code will compile
  
  }
 }
}
