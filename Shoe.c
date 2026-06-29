// Smart Shoe for Blind Person
// Ultrasonic Sensor + Piezoelectric Sensor + Buzzer + LED

#define TRIG_PIN 9
#define ECHO_PIN 10

#define BUZZER 11
#define LED 13
#define PIEZO A0

long duration;
int distance;
int piezoValue;

void setup() {
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);

  pinMode(BUZZER, OUTPUT);
  pinMode(LED, OUTPUT);

  Serial.begin(9600);
}

void loop() {

  // Ultrasonic Sensor
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);

  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  duration = pulseIn(ECHO_PIN, HIGH);

  distance = duration * 0.034 / 2;

  // Piezoelectric Sensor
  piezoValue = analogRead(PIEZO);

  // Obstacle Detection
  if (distance > 0 && distance <= 20) {
    digitalWrite(LED, HIGH);
    tone(BUZZER, 1000);
  }
  else {
    digitalWrite(LED, LOW);
    noTone(BUZZER);
  }

  // Fall / Heavy Pressure Detection
  if (piezoValue > 500) {
    digitalWrite(LED, HIGH);
    tone(BUZZER, 1500);
    delay(500);
    noTone(BUZZER);
  }

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.print(" cm  ");

  Serial.print("Piezo: ");
  Serial.println(piezoValue);

  delay(100);
}
