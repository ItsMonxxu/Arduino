bool isTheButtonBeingPressed = false;
int switchState =0;
int intensity = 0;
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
  if(isTheButtonBeingPressed == false)
  {
    isTheButtonBeingPressed = true;
    //aumentar la intensidad
    intensity = intensity + 16;
    //reset
    if (intensity > 255) {
      intensity = 0;
    }
  }
  //el boton sí esta pulsado
  
}
else{
  isTheButtonBeingPressed = false;
}//llave del else
  analogWrite(ledPin, intensity);
//vuelve al inicio del bucle (llave del loop()

}
