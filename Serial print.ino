
int example = 5;

void setup() {

  Serial.begin(9600); // set up serial monitor

}

void loop() {

// * note ln will create a new line. if you want the info to be on the same line, do not write ln after Serial.print

  Serial.println("Hello World!");   // this line of code will print the string: Hello World! to the serial monitor
  Serial.println(1+1);              // It does not just have to be a string. you can also print math equations
  Serial.println(example);          // you can also pint varialbes as seen heer. this will print 5.

  delay(2000); // wait two seconds for ease of read
  
}
