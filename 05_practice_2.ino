#define PIN_LED 7
unsigned int count;

void setup() {
  pinMode (PIN_LED, OUTPUT);
  count = 5;
}

void loop() {
  digitalWrite(PIN_LED, 0);
  delay(1000);
  for(char i=0;i<count;i++){
    digitalWrite(PIN_LED, 1);
    delay(200);
    digitalWrite(PIN_LED, 0);
    delay(200);
  }
  while(1){
    digitalWrite(PIN_LED, 1);
    } 
}