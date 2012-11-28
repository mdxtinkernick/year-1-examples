//using float so we can have speeds of less than 1
float xPos = 20;
float yPos = 10;
float mySize = 20;
float xSpeed = 2;
float ySpeed = 1;

void setup() {
  size(400, 400);  
  stroke(255);
}

void draw() {
  //clear window by redrawing background first
  background(0);
  //update values each time
  xPos=xPos+xSpeed;
  yPos=yPos+ySpeed;
  //check if it has gone outside of the edges of the 
  //window and mov it to the opposite side if it has
  if (xPos<-mySize) xPos=width+mySize;
  if (xPos>width+mySize) xPos=-mySize;
  if (yPos<-mySize) yPos=width+mySize;
  if (yPos>width+mySize) yPos=-mySize;
  //draw ball
  ellipse(xPos, yPos, mySize, mySize);
}

