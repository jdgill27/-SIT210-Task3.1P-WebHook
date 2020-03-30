int greenLedPin = D2;
int yellowLedPin = D3;
int redLedPin = D4;

int lightSensorPin = A0;
int analogValue = 0;

void setup() 
{
  pinMode(greenLedPin, OUTPUT);
  pinMode(yellowLedPin,OUTPUT);
  pinMode(redLedPin,OUTPUT);
  pinMode(lightSensorPin, INPUT);
}

void loop()
{
  analogValue = analogRead(lightSensorPin);
  if(analogValue < 30)
  {            
    digitalWrite(redLedPin, HIGH);
  }
  else if(analogValue >= 30 && analogValue <= 60)
  {
    digitalWrite(yellowLedPin, HIGH);
  }
  else
  {
    digitalWrite(greenLedPin, HIGH);
  }
  delay(200);
  digitalWrite(greenLedPin, LOW);
  digitalWrite(yellowLedPin, LOW);
  digitalWrite(redLedPin, LOW);
}