int sensorValue;
int sensorLow = 1023;
int sensorHigh;
const int ledPin = 13;
int swichstate = 0;
bool inTheButtonBeginPressed = false;
bool play = false;
int buttonPin = 2;


void setup() {
  // put your setup code here, to run once:
pinMode(ledPin, OUTPUT);
digitalWrite(ledPin, HIGH);
while (millis() < 5000) {
sensorValue = analogRead(A0);
if(sensorValue = sensorHigh) {  
}
if(sensorValue < sensorLow) {
  sensorLow = sensorValue;
}
}

digitalWrite(ledPin,LOW);
}
void loop() {
  // put your main code here, to run repeatedly:
checkButton();
if (play) {
  sound();
}
}

void checkButton() {
  swichstate = digitalWrite(buttonPin);
  if(swichState == HIGH) {
    if(isTheButtonBeginPressed == false){
      play = !play;
      isTheButtonPressed = true;
      
    }
  }
  else{
    isTheButtonBeginPressed = false
  }
}

void sound(){
  sensorValue = analogRead(A0);
  int pitch = 
  map(sensorValue, sensorLow, sensorHigh, 50, 4000);
  tone(8, pitch, 20);
  delay(10);
}
