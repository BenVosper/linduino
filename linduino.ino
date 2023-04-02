// These are the pins for the PWM output for each
// LED colour. Must use the PWM pins on the board.
// eg. For the UNO:
// https://store.arduino.cc/products/arduino-uno-rev3
int rPin = 3; 
int gPin = 5; 
int bPin = 6; 

void setup() {
  // Turn off builtin LED
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);
}

// Very basic RGB animation example.
// See https://arduinogetstarted.com/tutorials/arduino-rgb-led
// for more info.
void loop() {

  // Red up and down
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
    analogWrite(rPin, fadeValue);
    delay(15);
  }
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 5) {
    analogWrite(rPin, fadeValue);
    delay(15);
  }
  
  // Green up and down
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
    analogWrite(gPin, fadeValue);
    delay(15);
  }
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 5) {
    analogWrite(gPin, fadeValue);
    delay(15);
  }

  // Blue up and down
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
    analogWrite(bPin, fadeValue);
    delay(15);
  }
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 5) {
    analogWrite(bPin, fadeValue);
    delay(15);
  }

  // All up and down
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
    analogWrite(rPin, fadeValue);
    analogWrite(gPin, fadeValue);
    analogWrite(bPin, fadeValue);
    delay(15);
  }
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 5) {
    analogWrite(rPin, fadeValue);
    analogWrite(gPin, fadeValue);
    analogWrite(bPin, fadeValue);
    delay(15);
  }
}
