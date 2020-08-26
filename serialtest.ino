#include "Query.h"

Query Query;

void setup() {
  
  Serial.begin(BAUD_RATE);
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.println("Starting");

}

void loop() {

  //recieveAndExecuteQuery();

  
  bool isSplit = Query.split(Query.recieve());
  if(isSplit){ Query.executeAndRespond(); }
  Query.flush();
 
  
  delay(100);
  
}
