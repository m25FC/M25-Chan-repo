void seconst int trigPin = 7;
const int echoPin = 8;

void setup() {
 Serial.begin(115200);
 pinMode(trigPin, OUTPUT);
 pinMode(echoPin, INPUT);
 pinMode(13, OUTPUT); //Set pin 13 as an output
}

void loop() {
  long duration;
  float distance;

  // Clear the trigger pin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Send 10 microsecond pulse to trigger
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);

  // Read the echo pin (time in microseconds)
  duration = pulseIn(echoPin, HIGH);

  //Convert time to distance (cm)
  distance = duration * 0.034/2;

  digitalWrite(13,HIGH);// Tunr LED on

  // Print result
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println("cm");

  //Check if object is 20 cm or closer
  if (distance >0 && distance <= 20) {
    //Blink LED
    digitalWrite(13, HIGH);
    delay(100);    //Wait 1 second
    digitalWrite(13, LOW); //Turn LED off
    delay(100);   //Wait 1 second
  }tup() {
  // put your setup code here, to run once:

}


