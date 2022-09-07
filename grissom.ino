// USS Grissom Lighting

int navLED = 1;
long navLast;
unsigned long navStart;
unsigned long navEnd;
long navOn = 1.48 * 1000;
long navOff = 0.90 * 1000;
int navValue = HIGH;

int strobeLED = 0;
unsigned long strobeStart;
unsigned long strobeEnd;
long strobeOn = 0.15 * 1000;
long strobeOff = .75 * 1000;
int strobeValue = HIGH;

void setup() {
    navStart = millis();
    navEnd = navStart + navOn;
    pinMode(navLED, OUTPUT);
    strobeStart = millis();
    strobeEnd = strobeStart + strobeOn;
    pinMode(strobeLED, OUTPUT);
}

void loop() {

  unsigned long now = millis();
  
  // Blink the Navigation Lights
  if ( now < navEnd ) {
    digitalWrite(navLED, navValue);   
  } else {
    navStart = millis();
    if ( navValue == HIGH ) {
      navEnd = navStart + navOff;
      navValue = LOW;
    } else {
      navValue = HIGH;
      navEnd = navStart + navOn;
    }
  }
   
   // Blink the Strobe Lights
  if ( now < strobeEnd ) {
    digitalWrite(strobeLED, strobeValue);   
  } else {
    strobeStart = millis();
    if ( strobeValue == HIGH ) {
      strobeEnd = strobeStart + strobeOff;
      strobeValue = LOW;
    } else {
      strobeValue = HIGH;
      strobeEnd = strobeStart + strobeOn;
    }
  }
  
}
