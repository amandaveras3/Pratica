int ledVermelho = 13;
int ledAmarelo = 12;
int ledVerde = 11;

void setup() {
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
}

void loop() {
  digitalWrite(ledVerde, HIGH);
  delay(3000);
  digitalWrite(ledVerde, LOW);

  for (int i = 0; i < 3; i++) {
    digitalWrite(ledAmarelo, HIGH);
    delay(500);
    digitalWrite(ledAmarelo, LOW);
    delay(500);
  }

  digitalWrite(ledVermelho, HIGH);
  delay(3000);
  digitalWrite(ledVermelho, LOW);

}
