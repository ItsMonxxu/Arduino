/*nom : ramon mir 
 * 
 * data: 19 - 3 - 2021
 * 
 * el que fara aquesta problema 1 es que primer sensendra el led 1 
 * 
 * 
 * despres sensendran tots els led(led 1 led 2 led 3) 
 * 
 * 
 * estaran ensesos 1 segon i s'apagaran en 0,5 segons.
 * 
 * 
 * y aixi tota la estona.
 * 
 *
 */


const int    ledPin1=4;


const int    ledPin2 =9;


const int    ledPin3= 10;


void setup() {
  
  

pinMode ( ledPin1 , OUTPUT );



pinMode ( ledPin2 , OUTPUT );



pinMode ( ledPin3 , OUTPUT );



}


void loop() {
 

  digitalWrite ( ledPin3 ,HIGH );
  
  
  delay(1000);
  
  
    digitalWrite ( ledPin1 ,LOW );
    
    
  digitalWrite ( ledPin2 ,LOW );
  
  
  digitalWrite ( ledPin3 ,LOW );
  
  
  delay(1000);
  
 
  digitalWrite ( ledPin1 ,HIGH );
  
  
  digitalWrite ( ledPin2 ,HIGH );
  
  
 digitalWrite ( ledPin3 ,HIGH );
 
 
delay(500);


}
