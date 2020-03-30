int led = D2;  // The on-board LED
int lightSensorPin = A0;
int analogValue = 0;

void setup() 
{
  pinMode(led, OUTPUT);
  pinMode(lightSensorPin, INPUT);
}

void loop() 
{
  analogValue = analogRead(lightSensorPin);
  digitalWrite(led, HIGH);   // Turn ON the LED

  String light_intensity = String(analogValue);
  Particle.publish("light_intensity", light_intensity, PRIVATE);
  delay(10000);               // Wait for 30 seconds

  digitalWrite(led, LOW);    // Turn OFF the LED
  delay(5000);               // Wait for 30 seconds
}