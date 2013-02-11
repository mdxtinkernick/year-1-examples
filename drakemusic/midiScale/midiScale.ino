byte majorScale[]={0,2,4,5,7,9,11,12};
byte baseNote=55;
byte theVelocity=127;

void setup() {
  Serial.begin(31250);
}

void loop() {
   for (int i=0; i<8; i++){
    byte theNote=baseNote+majorScale[i];
    Serial.write(0x90);
    Serial.write(theNote);
    Serial.write(theVelocity);
    delay(150);
    Serial.write(0x90);
    Serial.write(theNote);
    Serial.write(0x0);
    delay(20);
   }
   delay(1000);
}
