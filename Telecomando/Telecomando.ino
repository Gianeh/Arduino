
#include <IRremote.h>

// esadecimali per il telecomando
const long int zero = 0XFF6897;
const long int uno = 0XFF30CF;
const long int due = 0XFF18E7;
const long int tre = 0XFF7A85;
const long int quattro = 0XFF10EF;
const long int cinque = 0XFF38C7;
const long int sei = 0XFF5AA5;
const long int sette = 0XFF42BD;
const long int otto = 0XFF4AB5;
const long int nove = 0XFF52AD;

//Crea oggettto Ricevitre = pin_rcv
int pin = 7;
IRrecv pin_rcv(pin);
decode_results risultati;

//Funzione che capisce il tasto premuto

void remote() {
  switch (risultati.value){
  
  case zero:
  Serial.println(0);

  break;
  
  case uno:
  Serial.println(1);
  break;
  
  case due:
  Serial.println(2);
  break;
  
  case tre:
  Serial.println(3);
  break;
  
  case quattro:
  Serial.println(4);
  break;
  
  case cinque:
  Serial.println(5);
  break;
  
  case sei:
  Serial.println(6);
  break;
  
  case sette:
  Serial.println(7);
  break;
  
  case otto:
  Serial.println(8);
  break;
  
  case nove:
  Serial.println(9);
  break;
  }
}

void setup() {
  pinMode(2, OUTPUT);
  pinMode(12, OUTPUT);
  
  Serial.begin(9600);
  pin_rcv.enableIRIn();
  pin_rcv.blink13(true);

}

void loop() {
  if (pin_rcv.decode(&risultati)) {

    remote();
    
    pin_rcv.resume();
  }
}
