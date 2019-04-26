//Developed By Naman Sinha 
// https://namansinha.in

#include <IRremote.h> // You Must have to include this library

int IRpin = 12; // Intializing Ir data pin
IRrecv irrecv(IRpin);
decode_results results;


void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
}  
void loop() 

{   
  if (irrecv.decode(&results)) 
    {
     Serial.println(results.value); // Print the Serial 'results.value'
      delay(10);

     irrecv.resume();   // Receive the next value
    }
}    
