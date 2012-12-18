void playRandomAudio(){
  Serial.print('t');
  Serial.write(random(12,18));
}

void playAudio(byte clipToPlay){
  Serial.print('t');
  Serial.write(clipToPlay); 
}


