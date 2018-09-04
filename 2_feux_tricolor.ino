const int leds[6] = {1,2,3,4,5,6};

void setup() {
  for (int i = 0; i < 7; i++) {
    pinMode(leds[i], OUTPUT);
    digitalWrite(leds[i], LOW);
  }
}

void loop() {
  feux(1250, 2000);
}

void feux(int ptidelay, int lngdelay) {
  eteindre(4, 2);
  allumer(0, 5);
  delay(2000);
  allumer(1, 666);
  eteindre(0, 666);
  delay(1250);
  allumer(2, 3);
  eteindre(5, 1);
  delay(2000);
  allumer(4, 666);
  eteindre(3, 666);
  delay(1250);
}

void allumer(int pin, int piin) {
  digitalWrite(leds[pin], HIGH);
  digitalWrite(leds[piin], HIGH);
}

void eteindre(int pin, int piin) {
  digitalWrite(leds[pin], LOW);
  digitalWrite(leds[piin], LOW);
}

