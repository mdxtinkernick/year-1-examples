//declare two objects of type MyBall (defined below)
MyBall theBall;
MyBall theOtherBall;

void setup() {
  size(400, 400);
  //instatiate the objects, supplying the values for 
  //initialising
  theBall=new MyBall(20, 20, 20, 1, 2);
  theOtherBall=new MyBall(60, 20, 40, .5, -2);
  stroke(255);
}

void draw() {
  background(0);
  //call each objects move function
  theBall.moveMe();
  theBall.drawMe();
  //call each objects draw function
  theOtherBall.moveMe();
  theOtherBall.drawMe();
}

//definition of MyBall class
class MyBall
{
  //each ball will have its own set of variables
  float xPos;
  float yPos;
  float mySize;
  float xSpeed;
  float ySpeed;

  //when an object is created the function with the same name as the 
  //class will be used to initiialise it
  MyBall(float setX, float setY, int setMySize, float setXSpeed, float setYSpeed) {
    //pass the values supplied in the parameters to the objects 
    //variables
    xPos=setX;
    yPos=setY;
    mySize=setMySize;
    xSpeed= setXSpeed;
    ySpeed= setYSpeed;
  }
  //this function changes the variables to move the ball
  //and checks for the edges of the window
  void moveMe() {
    xPos=xPos+xSpeed;
    yPos=yPos+ySpeed;
    if (xPos<-mySize) xPos=width+mySize;
    if (xPos>width+mySize) xPos=-mySize;
    if (yPos<-mySize) yPos=width+mySize;
    if (yPos>width+mySize) yPos=-mySize;
  }
  
  //this function draws the ball on the screen
  void drawMe() {
    ellipse(xPos, yPos, mySize, mySize);
  }
}




