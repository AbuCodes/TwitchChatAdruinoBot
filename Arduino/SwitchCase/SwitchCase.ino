/*
  Switch statement

 Demonstrates the use of a switch statement.  The switch
 statement allows you to choose from among a set of discrete values
 of a variable.  It's like a series of if statements.
*/
const int buttonPin = 2;     // the number of the pushbutton pin
int count=0;                 //variable to store the count value
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {  
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  // initialize serial communication:
  Serial.begin(9600);
}

void loop() {
// read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);
  
  // change the count value depending on the
  // buttonState value:  
  switch (buttonState) 
  {
    case 0: {    // the button is NOT pressed
      count=count-1; //OR count++;
      digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
      delay(1000);                       // wait for a second
      digitalWrite(12, LOW);    // turn the LED off by making the voltage LOW
      delay(1000);                       // wait for a second
      digitalWrite(11, LOW);    // turn the LED off by making the voltage LOW
      delay(1000);                       // wait for a second
      break;
    }
    case 1:  {  // the button IS pressed
      count=count+1;  //OR count--;
      digitalWrite(13, LOW);   // turn the LED on (HIGH is the voltage level)
      delay(1000);                       // wait for a second
      digitalWrite(12, LOW);    // turn the LED off by making the voltage LOW
      delay(1000);                       // wait for a second
      digitalWrite(11, HIGH);    // turn the LED off by making the voltage LOW
      delay(1000); 
      break;
  }
    default: break;
  }
  if(count<0)count=7;
  if(count>7)count=0;
  Serial.println(count);
  delay(1000);  // delay in between button reads
}




