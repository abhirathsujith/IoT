#define RELAY1 7
void setup() {

pinMode(RELAY1, OUTPUT);
Serial.begin(9600);
}
void loop() {

digitalWrite(RELAY1, HIGH); 
Serial.println("RELAY1");
delay(2000); 
digitalWrite(RELAY1, LOW); 
Serial.println("RELAY1");
delay(2000); 
}