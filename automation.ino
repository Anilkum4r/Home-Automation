const byte lamp =12;
const byte fan =13;
void setup() {
Serial.begin(9600); 
pinMode(lamp,1);
pinMode(fan,1);
}

void loop() {
 uint16_t ldrvalue = analogRead(A0);
 uint16_t tempsensor = analogRead(A1);
 Serial.println(ldrvalue);
 if(ldrvalue < 400){
  digitalWrite(lamp,1);
 }else if(ldrvalue >400) {
  digitalWrite(lamp,0);
 }else if(tempsensor >20){
  digitalWrite(fan,1);
 }else if (tempsensor <20){
  digitalWrite(fan,0);
 }delay (300);
}
