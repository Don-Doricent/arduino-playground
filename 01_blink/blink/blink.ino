void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH); // turn LED on
  delay(500); // wait 0.5 seconds
  digitalWrite(13, LOW); // turn LED off
  delay(500); // wait 0.5 seconds
}
