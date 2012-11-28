// two arrays holding the numbers we want to calculate
//the average of
int numbers[] = {54, 67, 2, 5, 567, 89, 100};
int numbers2[] = {1, 4 , 6, 7};


void setup() {
  //calculate the result by calling the function we have written
  // and display it in the bottom window
  float result=myArrayAverage(numbers);
  println(result);
  
  //do the same for the second array with a single line
  println(myArrayAverage(numbers2));
}

void draw() {
}


//the function we have written - requires an array as the
//paramter and returns the average as a float
float myArrayAverage(int theArray[]) {
  int sum=0;
  //for loop goes through each value in the array and adds
  //it to the sum
  for (int i=0 ; i<theArray.length ; i++) {
    sum=sum+theArray[i];
  }
  //calculates the average 
  //for the division one value needs to be coerced to a float
  //to get a float value from the calculation
  float answer = float(sum)/theArray.length;
  //what gets sent back when the function terminates
  return answer;
}

