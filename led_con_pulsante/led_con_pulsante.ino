void setup() {
  // put your setup code here, to run once:
pinMode(12,INPUT_PULLUP); // configuro il pin12 come input
pinMode(13,OUTPUT); // configuro il pin13 come output


}

void loop() {
  // put your main code here, to run repeatedly:

  if (digitalRead(12) == LOW ){ // il pulsante è premuto?
    // si è premuto
    digitalWrite(13,HIGH); // accendo il led
    delay(5000); // aspetto 5 sec
  } else
   digitalWrite(13,LOW);




}
