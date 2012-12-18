//if you give the parameter a zero it will stay where it is if switch is curretnly pressed, otherwise will rotate to next position.
//if you give the value of the position and it is currently at that position it will move to the next
int rotateToNext(int leavingLocation){
  motorControl=170;
  int valToReturn=0;
  //Serial.println("in rotate to next");
  while (motorControl>0){
    analogWrite(3, motorControl);
    for (int i=5; i<13; i++){
      if (digitalRead(i)==0){
        //Serial.println("here");
        if((i-4)!=leavingLocation){
          motorControl=0;
          valToReturn= i-4; 
        }
      }
    }
  }
  //add delay to true up position
  delay(100);
  analogWrite(3, motorControl);
  return valToReturn;
}
