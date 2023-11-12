int num;
void setup() {
  Serial.begin(9600);
}

void loop() {
  
    if(Serial.available()>0){
      num = Serial.parseInt();
      int result = num*2;
      Serial.print("number");
      Serial.println(num);
      Serial.print("result");
      Serial.println(result);

    }
  
}

