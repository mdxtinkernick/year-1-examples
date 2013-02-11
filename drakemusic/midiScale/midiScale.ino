//an array with the offsets for a major scale
byte majorScale[]={
  0,2,4,5,7,9,11,12};
//midi note 55 is D, so this will play a D major scale
byte baseNote=55;
//full volume for all the notes
byte theVelocity=127;

void setup() {
  //the speed that 5 pin din midi devices commminicate
  Serial.begin(31250);
}

void loop() {
  //for loop to play a scale
  for (int i=0; i<8; i++){
    //calculate the note value each time through the loop
    byte theNote=baseNote+majorScale[i];
    //send midi data for note on
    Serial.write(0x90);
    Serial.write(theNote);
    Serial.write(theVelocity);
    //let the note play for 150 millisecond
    delay(150);
    //turn the note off
    Serial.write(0x90);
    Serial.write(theNote);
    Serial.write(0x0);
    delay(20);
  }
  //1 second delay between each scale
  delay(1000);
}

