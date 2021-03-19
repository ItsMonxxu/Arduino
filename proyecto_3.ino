/*
*  Documentación del programa:Problema 3
*  NOM: RAMON MIR 
*  DATA:19/03/21
*  PROYECTO 3  el led 1 de enciende durante 1 segundo solo una vez 
*  y cuando se apaga le pulsas a el boton 1 o al boton dos y se enciende
*/
int switchState1 = 0;


int switchState2 = 0;


int ledPin = 4;


int botonPin1 = 5;


int botonPin2 = 8;



void setup() {

  
  pinMode( ledPin , OUTPUT );

  
  pinMode( botonPin1 , INPUT );

  
  pinMode( botonPin2 , INPUT );
  

  digitalWrite( ledPin , HIGH ); 

  
   delay( 1000 );

   
  digitalWrite( ledPin , LOW ); 

  
  delay( 1000 );
  
  
}

void loop() {
  
 switchState1 = digitalRead ( botonPin1 );

 
 switchState2 = digitalRead ( botonPin2 );

  
 if (switchState1 == LOW){

    
  digitalWrite ( ledPin , LOW) ;

    
    }

    
  else if (switchState1 = HIGH){

      
  digitalWrite(ledPin, HIGH);

    
  }
  if (switchState2 == LOW){

    
 digitalWrite(ledPin, LOW);

    
 }

    
 else if (switchState2 = HIGH){

      
 digitalWrite(ledPin, HIGH);
 }
  
}
