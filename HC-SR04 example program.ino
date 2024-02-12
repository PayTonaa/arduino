// Ultrasonic Distance Sensor with LED Display
// Uses HC-SR04 ultrasonic sensor to measure distance
// and an LED to display whether an object is within a specified range.

#define trigPin 12
#define echoPin 11
#define ledPin 2

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT); // Set trigPin as output
  pinMode(echoPin, INPUT); // Set echoPin as input
  pinMode(ledPin, OUTPUT); // Set ledPin as output
}

void loop() {
  int distance = measureDistance(); // Get distance in centimeters
  displayDistance(distance); // Display distance using LED
  delay(100); // Wait for a short time before measuring again
}

int measureDistance() {
  long duration;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  int distance = duration / 58; // Calculate distance in centimeters
  return distance;
}

void displayDistance(int distance) {
  if (distance >= 10 && distance <= 25) {
    digitalWrite(ledPin, HIGH); // Turn on LED if object within range
  } else {
    digitalWrite(ledPin, LOW); // Turn off LED if object outside range
  }
}
