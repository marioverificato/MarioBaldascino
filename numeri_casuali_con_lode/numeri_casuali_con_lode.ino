const int VOTO_MAX = 51;
const int VOTO_MIN = 20;
int c;
int partenza ;


void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0));

}

void loop() {

  partenza = random(VOTO_MIN, VOTO_MAX);
  Serial.println("inizio");
  for (c = partenza ; c >= 0; c--) {
    Serial.println(c);
    delay(100);



  }
  delay(2000);
}
