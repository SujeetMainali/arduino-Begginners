
int animationSpeed = 0;
const int buzzer = 8;
const int led = 13;
const int trigPin = 10;
const int echoPin = 11;
long duration;
int distance;
void setup()
{
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

void loop()
{
  //clear the pin
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  delayMicroseconds(10);
  //generate ultrasonic sound by setting up trigpin on high for 10ms
  


  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);

  // Calculating the distance
  distance = duration * 0.034 / 2;

  // Prints the distance on the Serial Monitor
  Serial.print("Distance: ");
  Serial.println(distance);
  if (distance <= 5) {
//    animationSpeed = 10;
    digitalWrite(led, HIGH);
//    delay(animationSpeed);
tone(buzzer, 2000);


  }
  else {
    digitalWrite(led, LOW);
//    delay(animationSpeed);
noTone(buzzer); 
  }




   // Send 1KHz sound signal...
  delay(1000);        // ...for 1 sec
      // Stop sound...
  delay(1000);
}
