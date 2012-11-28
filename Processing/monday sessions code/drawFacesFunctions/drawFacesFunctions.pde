//using  function to draw the face makes it easy to draw
//many faces. Any changes to the basic face only need to
//be made in one place

void setup(){
 size(400, 400);  
}


void draw() {
  drawFace(0, 0);
  drawFace(30, 50);
  drawFace(100,200);
}

//function based on draw_face
void drawFace(int xPos, int yPos){
  //each shape is drawn in relation to the 
  //x and y parameters passed to the function
  ellipse(xPos+20, yPos+20, 10, 10);
  ellipse(xPos+40, yPos+20, 10, 10);
  arc(xPos+30, yPos+30, 50, 25, 0, PI); 
}
