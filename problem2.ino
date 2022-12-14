/*

*/

void setup() {
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT); 
  
  int Red = 11;
  int Green = 10;
  int Blue = 9;
  
  analogWrite(Red, 128);
  analogWrite(Green, 2);
  analogWrite(Blue, 16);
}

void loop() {
  
}
