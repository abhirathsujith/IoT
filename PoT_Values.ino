const int potPin = A0;
int potValue = 0;
void setup() {
Serial.begin(9600);
delay(1000);
}
void loop() 
{
potValue = analogRead(potPin);
Serial.print("potValue : ");
Serial.println(potValue);
delay(1000);
}