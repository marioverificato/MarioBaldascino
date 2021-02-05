

void setup() {
  Serial.begin(9600);

  Serial.println("Accende e spegne la seriale");
  Serial.println("1 accende il Led");
  Serial.println("0 spegne il Led");
  pinMode(LED_BUILTIN, OUTPUT);

}

void loop() {
  if ( Serial.available() ) {
    unsigned char comando = Serial.read () ;
    if (comando == '2') {
      Serial.println("blink");
      digitalWrite(LED_BUILTIN, HIGH);
      Serial.println("acceso");
      delay (1000);
      Serial.println("spento");
      delay (1000);
      Serial.println("acceso");
    } else if (comando == '1') {
      digitalWrite(LED_BUILTIN, HIGH);
      Serial.println("acceso");
    } else if (comando == '0') {
      digitalWrite(LED_BUILTIN, LOW);
      Serial.println("spento");
    } else {
      Serial.println("comando non riconosciuto");
    }
  }
}
