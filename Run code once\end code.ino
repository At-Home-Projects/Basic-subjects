

/*
* Code that only runs once (void loop does not start over) can be writen useing a while loop with the only peramater being true.
* because the computer will run the loop forever without doing another task, anything after the while loop will not run.
*/



void setup() {

  Serial.begin(9600); // setup serial monitor

}

void loop() {

  Serial.println("Hello World!"); // print to show it works
  
  while (true); // while true do nothing
  
  Serial.println("This will not print!"); // print to show anything after the while loop will not run

}
