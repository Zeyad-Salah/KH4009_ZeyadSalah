int ledPins[] = {9, 6, 5};
int Pin_Count = 4;

void setup() {
  // put your setup code here, to run once:
  for (int PIN = 0; PIN < Pin_Count; PIN++){
    pinMode(ledPins[PIN], OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int PIN = 0; PIN < Pin_Count; PIN++){
    for(int i = 255; i >= 0 ; i--) {
    analogWrite(ledPins[PIN], i);
    delay(5);
    }
    //for(int i = 0;i < 255 ; i ++){
    //analogWrite(ledPins[PIN], i);
    //delay(10);
    //}
    //analogWrite(ledPins[PIN], 0);
    //digitalWrite(ledPins[PIN], LOW);
  }
  analogWrite(ledPins[9, 6, 5], 0);
}
