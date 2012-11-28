/* Blink 2 LEDs at different speeds
 
 Turns on and off 2 light emitting diodes(LED) connected to digital  
 pins, without using the delay() function.  This means that we can flash the LEDs at totally different speeds.
 Based on the Arduino example BlinkWithoutDelay
 
 The circuit:
 * LED with resistor attached from pin 12 to ground.
 * LED with resistor attached from pin 11 to ground.
 
 This example code is in the public domain.
 */

// constants won't change. Used here to 
// set pin numbers:
const int led1Pin = 11;      // the numbers of the LED pins
const int led2Pin = 12;

// Variables will change:
int led1State = LOW;             // ledState used to set each LED independantly
int led2State = LOW;

// the follow variables is a long because the time, measured in miliseconds,
// will quickly become a bigger number than can be stored in an int.
long previous1Millis = 0;        // will store last time each LED was updated
long previous2Millis = 0;

long interval1 = 1000;           // interval at which to blink each LED (milliseconds)
long interval2 = 1000;

void setup() {
  // set the digital pin as output:
  pinMode(led1Pin, OUTPUT);
  pinMode(led2Pin, OUTPUT);  
}

void loop()
{
  // here is where you can put other code that needs to be running all the time.

  // check to see if it's time to blink the LED; that is, if the 
  // difference between the current time and last time you changed the 
  // LED state is bigger than the interval specified for each LED 
  unsigned long currentMillis = millis();
   
  if(currentMillis - previous1Millis > interval1) {
    previous1Millis = currentMillis;   
    led1State=!led1State;
    digitalWrite(led1Pin, led1State);
  }
  
  if(currentMillis - previous2Millis > interval2) {
    previous2Millis = currentMillis;   
    led2State=!led2State;
    digitalWrite(led2Pin, led2State);
  }
}

