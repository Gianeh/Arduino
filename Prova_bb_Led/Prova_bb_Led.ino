int pin_in = 7;
int pin_out = 13;
void setup() {
  pinMode(pin_in, INPUT);

}

void loop() {


  if (digitalRead(7) == HIGH) {

    digitalWrite(pin_out, HIGH);

  }
  else {
    digitalWrite(pin_out, LOW);

  }


}
