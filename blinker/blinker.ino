int animationSpeed = 0;
const int buzzer = 7;
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop()
{
  animationSpeed = 500;
  digitalWrite(13, HIGH);
  delay(animationSpeed);
  digitalWrite(13, LOW);
  delay(animationSpeed);
  
  digitalWrite(12, HIGH);
  delay(animationSpeed);
  digitalWrite(12, LOW);
  delay(animationSpeed);
  
  digitalWrite(11, HIGH);
  delay(animationSpeed);
  digitalWrite(11, LOW);
  delay(animationSpeed);

  digitalWrite(5, HIGH);
  delay(animationSpeed);
  digitalWrite(5 , LOW);
  delay(animationSpeed);

  tone(buzzer, 1000); // Send 1KHz sound signal...
  delay(1000);        // ...for 1 sec
  noTone(buzzer);     // Stop sound...
  delay(1000);
}
