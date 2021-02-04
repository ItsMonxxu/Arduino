int switchState = 0;

//variables globales
const int redPin = 2;
const int bluePin = 6;
const int buttonPin = 4;

void setup() {
  // put your setup code here, to run once:
//Iniciando leds
pinMode(redPin, OUTPUT);
pinMode(bluePin, OUTPUT);
//Ininiando botón
pinMode(buttonPin, INPUT);

}

void loop() {
  //leer el estado del botón
  switchState = digitalRead(buttonPin);
  // esto es un comentario
  if (switchState == LOW){
  //el botón no esta pulsadeo
digitalWrite(redPin,HIGH); //se enciende el rojo
digitalWrite(bluePin,LOW); //se apaga el azul
}
else {
  //elsa let it go
  //pulsamos el botón
  //el botón esta pulsado
  
 //se enciende el rojo
for(int blinks = 0; blinks <100; blinks++) {
  
    digitalWrite(bluePin,HIGH); //se enciende el azul
    delay(250);
    
    digitalWrite(redPin,LOW); // apagar el rojo
    delay(250); //espera medio segundo
    
    digitalWrite(bluePin,LOW); //se apaga el azul
    delay(250);
    
    digitalWrite(redPin,HIGH); //encender el rojo
    delay(250); //espera medio segundo

} //lave del for
} //llave del else
} //vuelve al inicio del bucle (llave del loop)
