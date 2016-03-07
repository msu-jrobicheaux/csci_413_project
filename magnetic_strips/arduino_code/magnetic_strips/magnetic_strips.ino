const int stripPin = 2;

void setup() {
  Serial.begin(9600);
  pinMode(stripPin, INPUT);
}

void loop() {
  if(digitalRead(stripPin) == LOW) {
    Serial.println("Closed");
  } else {
    Serial.println("Open");
  }
  
  delay(500);
}
