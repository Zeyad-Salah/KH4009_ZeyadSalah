void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  for( int i = 30; i >= 0; i--){
    Serial.println(i);
    delay(250);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  
}
