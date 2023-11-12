int num;
void setup() {
  Serial.begin(9600);
}

void loop() {
  
    if(Serial.available()){
       String name = Serial.readString();
      int result = num*2;
      Serial.print("recieved name:");
      Serial.println(name);
    }
  
}
