const int ledCarroVermelho = 13;
const int ledCarroAmarelo = 12;
const int ledCarroVerde = 11;
const int ledPedestreVermelho = 10;
const int ledPedestreVerde = 9;
const int pinoBotao = 2;

int buttonState = HIGH;
int lastButtonReading = HIGH;
unsigned long lastDebounceTime = 0;
const unsigned long debounceDelay = 50;

void setup() {
  pinMode(ledCarroVermelho, OUTPUT);
  pinMode(ledCarroAmarelo, OUTPUT);
  pinMode(ledCarroVerde, OUTPUT);
  pinMode(ledPedestreVermelho, OUTPUT);
  pinMode(ledPedestreVerde, OUTPUT);
  pinMode(pinoBotao, INPUT_PULLUP);

  digitalWrite(ledCarroVerde, HIGH);
  digitalWrite(ledCarroAmarelo, LOW);
  digitalWrite(ledCarroVermelho, LOW);
  digitalWrite(ledPedestreVermelho, HIGH);
  digitalWrite(ledPedestreVerde, LOW);
}

void loop() {
  int reading = digitalRead(pinoBotao);

  if (reading != lastButtonReading) {
    lastDebounceTime = millis();
  }

  if ((millis() - lastDebounceTime) > debounceDelay) {
    if (reading != buttonState) {
      buttonState = reading;
      if (buttonState == LOW) {
        sequenciaPedestre();
      }
    }
  }
  lastButtonReading = reading;
}

void sequenciaPedestre() {
  digitalWrite(ledCarroVerde, LOW);
  digitalWrite(ledCarroAmarelo, HIGH);
  delay(2000);

  digitalWrite(ledCarroAmarelo, LOW);
  digitalWrite(ledCarroVermelho, HIGH);
  delay(1000);

  digitalWrite(ledPedestreVermelho, LOW);
  digitalWrite(ledPedestreVerde, HIGH);
  delay(5000);

  for (int i = 0; i < 5; i++) {
    digitalWrite(ledPedestreVerde, LOW);
    delay(250);
    digitalWrite(ledPedestreVerde, HIGH);
    delay(250);
  }

  digitalWrite(ledPedestreVerde, LOW);
  digitalWrite(ledPedestreVermelho, HIGH);
  delay(1000);

  digitalWrite(ledCarroVermelho, LOW);
  digitalWrite(ledCarroVerde, HIGH);
}
