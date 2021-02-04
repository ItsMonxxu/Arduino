bool isTheButtonBeingPressed = false;
int switchState =0;
int delayMillis = 0;
const int ledPin =6;
const int buttonPin =2;
void setup() {
  // put your setup code here, to run once:
pinMode(ledPin,OUTPUT);
pinMode(buttonPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

//leer el estado del botón
switchState=digitalRead(buttonPin);
if (switchState == HIGH){
  //Revisamos si es el primer loop donde el botón está pulsado
  if(true)
  {
    isTheButtonBeingPressed = true;
    delayMillis ++;
  }
  //el boton sí esta pulsado
  
}
else{
  isTheButtonBeingPressed = false;
}//llave del else
  digitalWrite(ledPin,HIGH);
  delay(1);
  digitalWrite(ledPin,LOW);
  delay(delayMillis);
//vuelve al inicio del bucle (llave del loop()

//reset
if (delayMillis > 15) {
  delayMillis = 0;
}
}
