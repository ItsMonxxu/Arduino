const int pinLed = 9;
const int pinBoton = 3; 
const int pinEjeY = A1; 
const int pinEjeX = A0; 

 int estadoBoton =0;
void setup() {
  pinMode(pinBoton, INPUT);
  digitalWrite(pinBoton, HIGH);
  Serial.begin(9600);
}
 
void loop() {
 estadoBoton= digitalRead(pinBoton);
  Serial.println(estadoBoton);
   if (estadoBoton == LOW){
  digitalWrite(pinLed, HIGH);
 }
 else{
  digitalWrite(pinLed, LOW);
 }
}
