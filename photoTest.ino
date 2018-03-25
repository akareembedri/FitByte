void setup() {
  // put your setup code here, to run once:
  analogReadResolution(16);
  Serial.begin(115200);
  pinMode(8,OUTPUT);
  digitalWrite(8,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
      Serial.println(analogRead(A2));
      //Serial.println(" 0 0 0");
      delay(10);

}
