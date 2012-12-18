void serialEvent(){
 while (Serial.available()){
  if (Serial.read()=='X'){
    switch (audioAction){
    case 1:
    //question has just finished playing
    rotate=false;
    check=true;
    readQuestion=false;
   
   break;
   
   case 2:
   //answer audio has just finished
   rotate=true;
   check=false;
   readQuestion=false;
   break;
   
   //random audio has just finshed playing
   case 3:
   readQuestion=true;
   rotate=false;
   check=true;
   break;
    }
    
    audioAction=0;
  }
 }
}

