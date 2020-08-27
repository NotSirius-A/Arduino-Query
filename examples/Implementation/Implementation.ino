#include "Query.h"

Arduino_Query Query;

void setup() {
  
  Query.begin();
 
  Serial.println("Starting");
  pinMode(LED_BUILTIN, OUTPUT);


}

void loop() {

  bool isSplit = Query.split(Query.recieve());
  if(isSplit){ 
    Query.executeAndRespond(); 
  }
 
  Query.flush();
  
 
  delay(100);
  
}
