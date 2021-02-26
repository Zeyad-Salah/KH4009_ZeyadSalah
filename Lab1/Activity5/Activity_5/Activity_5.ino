int remainder;

int result;

void setup(){
  Serial.begin(9600);
  Serial.println(SumDigits(0));
  Serial.println(SumDigits(2));
  Serial.println(SumDigits(28));
  Serial.println(SumDigits(504));
  Serial.println(SumDigits(2048));
  Serial.println(SumDigits(32767));
}

void loop(){
  
}

int SumDigits(int x) {
  result = 0;
  while (x > 0){
    remainder = x % 10 ; 
    result += remainder; 
    x = x / 10;
  }
  return result;
  result = 0;
}
