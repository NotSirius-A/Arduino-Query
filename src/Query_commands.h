/*
  Query.h - Library for creating and managing arduino queries.
  Created by NotSirius-A 
  Open source
  
  Author: https://github.com/NotSirius-A
  Library: https://github.com/NotSirius-A/Arduino-Query
*/

#ifndef QUERY_COMMANDS_H
#define QUERY_COMMANDS_H
#include <Arduino.h>


#define START_OF_PATH_1 "1-1"
#define START_OF_PATH_2 "2-2"
#define START_OF_PATH_3 "3-3"
#define START_OF_PATH_4 "4-4"
#define START_OF_PATH_5 "5-5"
#define START_OF_PATH_6 "6-6"
#define START_OF_PATH_7 "7-7"
#define START_OF_PATH_8 "8-8"
#define START_OF_PATH_9 "9-9"


void Arduino_Query::Path1(){}

void Arduino_Query::Path2(){}

void Arduino_Query::Path3(){}

void Arduino_Query::Path4(){}

void Arduino_Query::Path5(){}

void Arduino_Query::Path6(){}

void Arduino_Query::Path7(){}

void Arduino_Query::Path8(){}

void Arduino_Query::Path9(){}

/* 
  ------- Example ------- 
it reacts to START_OF_PATH1; turns ON built-in LED when followed by "-e" or if followed by valid time = t in miliseconds turns LED on for t miliseconds;
turns OFF LED when followed by "-d";


void Arduino_Query::Path1(){
  
  pinMode(LED_BUILTIN, OUTPUT);
  
  if(strcmp(_queryWord[1], "-e") == 0){
    digitalWrite(LED_BUILTIN, HIGH);
    if(ALLOW_RESPONSES){ Serial.println("OK, LED is now enabled"); }
    unsigned int delayTime = atoi(_queryWord[2]);
      //atoi returns *undefined* if string is not a number
      
    if(delayTime < 60000 && delayTime > 0){
      if(ALLOW_RESPONSES){ Serial.print("For "); Serial.print(delayTime); Serial.println(" miliseconds"); }
      delay(delayTime);
      digitalWrite(LED_BUILTIN, LOW);
    }
  }else if(strcmp(_queryWord[1], "-d") == 0){
    digitalWrite(LED_BUILTIN, LOW);
    if(ALLOW_RESPONSES){ Serial.println("OK, LED is now disabled"); }
  }else {    
    if(ALLOW_RESPONSES){
      Serial.print("\"");
      Serial.print(_queryWord[1]);
      Serial.println("\" Could not be understood try "-e" or "-d" ");
    }  
    
  }
}
*/

#endif
