/*

*/

int inPin = A0;
int val;

void setup() {
  Serial.begin(9600);
  pinMode(inPin, INPUT);
}

void loop() {
  val = analogRead(inPin);
  //Hexadecimal is used by putting HEX after your Analog Variable.
  Serial.println(val);
  delay(250);  
}

