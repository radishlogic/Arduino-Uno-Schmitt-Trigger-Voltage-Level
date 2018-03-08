#define PIN_INPUT 2
#define PIN_OUTPUT 3

void setup() {
  pinMode(PIN_INPUT, INPUT);
  pinMode(PIN_OUTPUT, OUTPUT);
}

void loop() {
  boolean inputValue = digitalRead(PIN_INPUT);
  digitalWrite(PIN_OUTPUT, inputValue);
}
