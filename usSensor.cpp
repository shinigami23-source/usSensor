
#include <Arduino.h>
#include "usSensor.h"

void  usSensor::begin(uint8_t _trigger, uint8_t _echo){
            trigger = _trigger;
            echo = _echo;
            pinMode(trigger,OUTPUT);
            pinMode(echo,INPUT);
        }


 float usSensor::read(){
  //off and "clear air"
  uint32_t duration;
   digitalWrite(trigger, LOW);  
	 delayMicroseconds(2);  

// Pulse trigger
	digitalWrite(trigger, HIGH); 
 //10 uS pulse and clear air
	delayMicroseconds(10);  
	digitalWrite(trigger, LOW); 

  //take reading from echo
  duration = pulseIn(echo, HIGH);
 
  return (duration*.0343)/2;
}

