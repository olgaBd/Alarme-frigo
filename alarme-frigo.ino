void setup() {
  // put your setup code here, to run once:
Serial.begin (9600);
pinMode(7, OUTPUT);
}

void loop() {
   int Light = analogRead(0);
   Serial.println(Light);
     if(Light>200){
      delay(10000);
     if(Light>200){
   
   digitalWrite(7,HIGH);
    }
    } else{
   digitalWrite(7,LOW);
      
    }
  

}
