
#include "defn.h"
#define dirPin 10
#define stepPin 11
#define stepsPerRevolution 200

void motor_step(bool dirs, short steps, int mspeed );


void setup(){
  pinMode(stepPin, OUTPUT);
  pinMode(dirPin, OUTPUT);
  Serial.begin(9600);
}
  
void loop(){
 
 char customKey = customKeypad.getKey();
 
 // MOTOR
 if (customKey == '#')
 {
   motor_step(forward,1000,5);
   
 }
 else if (customKey == '1'){
  motor_step(forward,400,5);
 }
else if (customKey == '2'){
  motor_step(forward,600,5);
  }
else if (customKey == '3'){
  motor_step(forward,800,5);
  }  
//MOTOR


}
 
    
    
