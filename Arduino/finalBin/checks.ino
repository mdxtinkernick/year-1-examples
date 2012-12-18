//check lasers returns zero if nothing detected, returns 1 for left, 2 for right
int checkLasers(){
  int rubbishHole=0;
 for (int i=14; i<18; i++){  
   if (digitalRead(i)==1){
    if (i<16){
      rubbishHole=2;
    }else{
      rubbishHole=1;
    }
   }
}
return rubbishHole;
}


void checkAnswer(int theAnswer, int theQuestion){
  if (theAnswer==answers[theQuestion-1]){ //arrays are 0 indexed
    playAudio(correct);
  }
  else{
    playAudio(wrong);
  }

}

