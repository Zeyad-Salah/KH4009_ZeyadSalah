int data_pin = 2;
int clock_pin = 3;
int latch_pin = 4;

void shiftRepDisplay(byte data){
  digitalWrite(latch_pin, LOW);
  shiftOut(data_pin, clock_pin, LSBFIRST, data);
  digitalWrite(latch_pin, HIGH);
}

void setup() {
  // put your setup code here, to run once:
  pinMode(data_pin, OUTPUT);
  pinMode(clock_pin, OUTPUT);
  pinMode(latch_pin, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  byte number = B10000000;
  for (int i =1; i <= 8; i++){
    shiftRepDisplay(number);
    number = number >> 1;
    delay(200);
    if (number == B00000001){
      for (int i = 8; i >= 1; i--){
        shiftRepDisplay(number);
        number = number << 1;
        delay(200);
      }
    }
  }
}
