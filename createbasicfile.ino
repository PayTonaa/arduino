// Color-Changing LED Sequence
// Uses an RGB LED to display a cycling color pattern

const int redPin = 9;    // Red pin connected to Arduino pin 9
const int greenPin = 10; // Green pin connected to Arduino pin 10
const int bluePin = 11;  // Blue pin connected to Arduino pin 11

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  // Red
  setColor(255, 0, 0);
  delay(1000);

  // Green
  setColor(0, 255, 0);
  delay(1000);

  // Blue
  setColor(0, 0, 255);
  delay(1000);
}

void setColor(int red, int green, int blue) {
  analogWrite(redPin, red);     // Set red intensity (0-255)
  analogWrite(greenPin, green); // Set green intensity (0-255)
  analogWrite(bluePin, blue);   // Set blue intensity (0-255)
}
