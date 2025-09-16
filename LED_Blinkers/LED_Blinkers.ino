
int d = 300; // universal delay timer <-- change this to change all delays. 

void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT); // LED 1 control pin is set up as an output
  pinMode(3, OUTPUT); // LED 2 control pin is set up as an output
  pinMode(4, OUTPUT); // LED 3 control pin is set up as an output
  pinMode(5, OUTPUT); // LED 4 control pin is set up as an output
  pinMode(6, OUTPUT); // LED 5 control pin is set up as an output

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(2, HIGH); // turn LED 1 on
  delay(d); // wait for 0.5 seconds
  digitalWrite(2, LOW); // turn LED 1 off

  digitalWrite(3, HIGH); // turn LED 2 on
  delay(d); // wait for 0.5 seconds
  digitalWrite(3, LOW); // turn LED 2 off

  digitalWrite(4, HIGH); // turn LED 3 on
  delay(d); // wait for 0.5 seconds
  digitalWrite(4, LOW); // turn LED 3 off

  digitalWrite(5, HIGH); // turn LED 4 on
  delay(d); // wait for 0.5 seconds
  digitalWrite(5, LOW); // turn LED 4 off

  digitalWrite(6, HIGH); // turn LED 5 on
  delay(d); // wait for 0.5 seconds
  digitalWrite(6, LOW); // turn LED 5 off


}
