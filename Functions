
/*
 * This exampe is split up into three sections
 * The first is an example of a basic function.
 * The next is an example of a function template.
 * The third and final secion is a practical example of why you would use a function, useing an RGB LED
 * 
 * A function is for making your code more efficent. most notably if you have several lines of code that repeat.
 */



// RGB pin setup
int red = 11;
int green = 10;
int blue = 9;

void setup() {

Serial.begin(9600); // setup serial monitor

// setup rgb pins as output
pinMode(red, OUTPUT);
pinMode(green, OUTPUT);
pinMode(blue, OUTPUT);

}

void loop() {

hi(); // call hi

add(5,2); // call add (you can change these numbers (the peramaters) to make a new math equastion)

rgb(255,100,35); // peramater 1 is the red value, peramater 2 is the green value, and peramater 3 is the blue value
delay(2000);
rgb(0,0,0); // (this line tunrs the RGB off) we do not have to retype all 3 lines of code for the reuse of the function
delay(2000);
}

// function definitions go in bottom global.


// basic function
void hi(){     // keyword void, the name, () for peramaters (not used in a basic function) then a {
  Serial.println("Hello World!"); // print to show how it works
} // end the function


// function template
// set this one up the same as before, but use peramaters. peramaters are variables we can change when we call the fnction.

void add(int parameter1,int parameter2) { // to make a peramater, in the pernthasys, create a new variable. if you have more than one, use a comma to seperate.
  Serial.println(parameter1 + parameter2); // now you can use the peramaters in your code acordingly.
}


void rgb(int r,int g,int b) { // setup rgb function

  analogWrite(red, r); // red pin
  analogWrite(green, g); // green pin
  analogWrite(blue, b); // blue pin
  
}

