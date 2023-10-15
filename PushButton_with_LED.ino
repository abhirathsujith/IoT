#define BUTTON_PIN 4
#define LED_PIN 13

int button_state = 0; 
void setup() {

pinMode(LED_PIN, OUTPUT);

pinMode(BUTTON_PIN, INPUT);
Serial.begin(9600);
}
void loop() {

button_state = digitalRead(BUTTON_PIN);
Serial.print("BUTTON VALUE : ");
Serial.println(button_state);
delay(100);

if (button_state == LOW) 
digitalWrite(LED_PIN, HIGH);
else
digitalWrite(LED_PIN, LOW); 
}
