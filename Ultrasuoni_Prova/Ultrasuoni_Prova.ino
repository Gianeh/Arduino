int echo = 8;
int trigger = 13;
int led = 2;


void setup() {
  pinMode(10, OUTPUT);
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
  Serial.println("SENSORE ULTRASUONI: ");

}

void loop() {
  digitalWrite(trigger, LOW);

  digitalWrite(trigger, HIGH);

  delayMicroseconds(3000);

  digitalWrite(trigger, LOW);



  long t_ritorno = pulseIn(echo, HIGH);


  Serial.println();

  long distanza = (t_ritorno / 29) / 2;

  Serial.print("Distanza: ");
  Serial.print(distanza);
  Serial.println(" cm");



  if (distanza < 15) {
    digitalWrite(10, HIGH);
  }
  else {
    digitalWrite(10, LOW);
  }
  delay(500);


}
