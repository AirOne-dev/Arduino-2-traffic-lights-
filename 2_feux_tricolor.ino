const int leds[6] = {1,2,3,4,5,6};

void setup() {
  for (int i = 0; i < 7; i++)
  {
    pinMode(leds[i], OUTPUT);
    digitalWrite(leds[i], LOW);
  }
}

void loop() {
  digitalWrite(leds[0], HIGH);
  digitalWrite(leds[5], HIGH);
  delay(2000);
  digitalWrite(leds[1], HIGH);
  digitalWrite(leds[0], LOW);
  delay(1250);
  digitalWrite(leds[2], HIGH);
  digitalWrite(leds[5], LOW);
  digitalWrite(leds[1], LOW);
  digitalWrite(leds[3], HIGH);
  delay(2000);
  digitalWrite(leds[3], LOW);
  digitalWrite(leds[4], HIGH);
  delay(1250);
  digitalWrite(leds[4], LOW);
  digitalWrite(leds[2], LOW);
  
}


