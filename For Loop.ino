/*
* loop on line 14 and 18
*/


void setup() {
  Serial.begin(9600); // set up serial monotor
}


void loop() {

  for (int i=0; i<10; i++) {      // this is the loop.
    Serial.println("Helo World!");
    delay(1000);
  }

while (true);

}


/*
* the second number, i<10; is the number of times the loop will repeat. in the case above, it will repeat 10 times.
* to change the number of times it will repeat, change the second number. (the one proceded by the less than symbol)
*
* This is only one of several ways to set tis up, althogh I find it the most effective way.
*/
