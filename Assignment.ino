int startValue = 5;
int ledPin = 13;
 
void flashLED(int times){
  while(times > 0){
    digitalWrite(ledPin, 1);
    delay(500);
    digitalWrite(ledPin, 0);
    delay(500);

    times = times - 1;
  }
}

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);

  Serial.println(" ");
  Serial.println("=== Smart Countdown Starting ===");

  int count = startValue;
  while(count > 0){
    Serial.print("Count: ");
    Serial.println(count);

    flashLED(count);

    delay(1000);
    count = count - 1;
  }
  Serial.println("=== Countdown Complete ===");
}
 
void loop() {

}
