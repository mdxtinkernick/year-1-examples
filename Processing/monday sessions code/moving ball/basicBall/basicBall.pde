int xPos = 150;
int yPos = 200;
int mySize=20;

//runs once when the sketch starts
void setup() {
  background(0);
  size(400, 400);  
  stroke(255);
}

//runs repetitively after setup
//no movement at the moment
void draw() {
  ellipse(xPos, yPos, mySize, mySize);
}

