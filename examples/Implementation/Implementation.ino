/*
  Query.h - Library for creating and managing arduino queries.
  Created by NotSirius-A 
  Open source
  
  Author: https://github.com/NotSirius-A
  Library: https://github.com/NotSirius-A/Arduino-Query

  !!!
  Please read the "README.ASOC" as it is guide on how to operate this library
  !!!
  
  This sketch contains all the functions needed to properly operate this library
*/

#include <Query.h>

Arduino_Query Query;


void setup() {
  Query.begin();
}

void loop() {

  doQueryStuff();
 
  delay(100);
  
}

void doQueryStuff(){
  
  bool isSplit = Query.split(Query.receive());
  if(isSplit){ 
    Query.executeAndRespond(); 
  }
 
  Query.flush();
}
