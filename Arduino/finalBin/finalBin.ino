const byte correct=10;
const byte wrong=11;
byte answers[]={
  1,2,1,2,1,2,1,2};

boolean check=true;
boolean rotate=false;
boolean readQuestion=true;
//o means no action needed at end ofany audio that is playing, 1 means playing question, 2 means playing answer, 3 means random audio  
byte audioAction=0;
byte motorControl=170;
byte currentPosition=0;
long lastActionTime=0;
const long idleTime=180000;

void setup() {
  Serial.begin(38400);
  for (int i=5; i<18; i++){
    pinMode(i, INPUT);
    digitalWrite(i, HIGH);
  }
  currentPosition=rotateToNext(0);
 readQuestion=true;
  randomSeed(analogRead(5));
}

void loop() {
  if (check){
    int rubbishAnswer=checkLasers();
    if (rubbishAnswer>0){
      checkAnswer(rubbishAnswer, currentPosition);
      lastActionTime=millis();
      check = false;
      audioAction= 2;
    }
  }

  if (rotate){
    currentPosition=rotateToNext(currentPosition);
    readQuestion=true;
    check=true;
    rotate=false;
  }

  if (readQuestion){
    playAudio(currentPosition);
    audioAction=1;
    readQuestion=false;
    check=true;
  }

  if ((millis()-lastActionTime)>idleTime){
    playRandomAudio();
    audioAction=3;
     lastActionTime=millis();
    //serial event will play the current question when random track finishes
  }
}






