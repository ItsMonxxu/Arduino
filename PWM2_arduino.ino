bool  isTheButtonBegingPressed = false;
const int ledPin = 6;
const int buttonPin = 2;

int swichstate = 0;
int delayMills = 0;

void setup() {
  // put your setup code here, to run once:
pinMode(ledPin, OUTPUT);
pinMode(buttonPin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:




swichstate = digitalRead(buttonPin);

if(swichstate == HIGH){
 
  if (isTheButtonBegingPressed == false);
    {

    isTheButtonBegingPressed = true;

    delayMills ++;
    }
//el boton si esta pulsado
}

else{
 isTheButtonBegingPressed = false;
}

digitalWrite(ledPin,HIGH);
delay(1);

digitalWrite(ledPin,LOW);
delay(delayMills);

}
