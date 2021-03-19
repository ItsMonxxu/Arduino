//nom ramon mir
//dia 19 3 2021
//cuando llegue el potenciometro a 0 pulsando el boton se enciende el led

int potenciometroVal (1023, 0, 255, 0);

int switchState = 0;

const int LEDPin=4; 

const int buttonPin= 5; 

const int potenciometroPin= A0;

void setup() {
  
  
pinMode(LEDPin,OUTPUT);


Serial.begin(9600);


pinMode(buttonPin, INPUT);


pinMode(potenciometroPin, INPUT);


}
void loop() {

  
 switchState = digitalRead(5);

 
 potenciometroVal = analogRead(potenciometroPin);

  

 if (switchState == LOW){

  
 digitalWrite(A0,HIGH);

 
 
 digitalWrite(5, LOW);

 
}  


else{ 

  
   digitalWrite(A1, LOW);

   
   digitalWrite(5, HIGH);

   
   }
}
