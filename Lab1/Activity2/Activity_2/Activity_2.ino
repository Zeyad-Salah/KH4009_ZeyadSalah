void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 1; i > 0; i++){
    if ( (i % 3 == 0) and (i % 5 == 0)){
      Serial.println("FizzBuzz");
    }
    else if ( i % 3 == 0)
    {
      Serial.println("Fizz");
    }
    else if (i % 5 == 0)
    {
    Serial.println("Buzz");
    }
    else
    {
      Serial.println(i);
    }
    delay(300);
  }
}
