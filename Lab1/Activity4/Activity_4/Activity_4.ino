int my_power;

int answer;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  answer = power(3,2);
  Serial.println(answer);
  
  answer = power(5,1);
  Serial.println(answer);
  
  answer = power(9,0);
  Serial.println(answer);
  
  answer = power(2,14);
  Serial.println(answer);
  
  answer = power(0,4);
  Serial.println(answer);
}

void loop() {
  // put your main code here, to run repeatedly:

}

int power(int x, int y){
  int n = 1;

  for(int i = 0; i < y; i++){
    n *= x;
  }
  return n;
}
