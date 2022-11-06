//int animationSpeed = 0;
const int buzzer = 8;
const int led = 13;
const int trigPin = 10;
const int echoPin = 11;
const int fan_control_pin = 6;
long duration;
int distance;
int rpm;
int count = 0;
unsigned long startTime;
void setup()
{
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(fan_control_pin, OUTPUT);
  analogWrite(fan_control_pin, 0);
  Serial.begin(9600);
  attachInterrupt(digitalPinToInterrupt(6), counter, RISING);
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
//    tone(buzzer, 2000);
analogWrite(fan_control_pin, 255);


  }
  else if(distance <=10 && distance >5){
    analogWrite(fan_control_pin, 153);
    digitalWrite(led, HIGH);
    delay(1000);
    digitalWrite(led, LOW);
  }
  else {
    analogWrite(fan_control_pin, 0);
    digitalWrite(led, LOW);
    }
    startTime = millis();
    count = 0;
    while((millis()-startTime)<1000){
      
      }
      rpm = count*60/2;
      Serial.print("rpm:");
      Serial.println(rpm);
      
    




  // Send 1KHz sound signal...
//  delay(1000);        // ...for 1 sec
//  // Stop sound...
//  delay(1000);
}
void counter(){
  count++;
  }
