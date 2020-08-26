#include "Query.h"

Query::Query(){
  Serial.begin(BAUD_RATE);
  while(! Serial){}
  Serial.setTimeout(SERIAL_TIMEOUT);

  if(DEBUG){
    Serial.println("-----------------");
    Serial.println("Query Initialized");
  }
}

void Query::flush(){
  _query = "\0";
  for(int i = 0; i < MAX_INPUT_WORDS; i++){
    _queryWord[i] = "\0"; 
  }
}

char* Query::recieve(){

  //returns NULL if theres no serial incoming
  if(Serial.available() == 0){ return '\0'; }
  
  char input[INPUT_SIZE + 1];
  byte size = Serial.readBytes(input, INPUT_SIZE);
  //null termiate input
  input[size] = '\0';
  _query = strtok(input, QUERY_ENDING);

  if(DEBUG){
    Serial.print("Q = \"");
    Serial.print(_query);
    Serial.println("\"");
  }

  
  return _query;
  
}

bool Query::split(char* message){

  if(strcmp(message, '\0') == 0){ return false; }
  
  _queryWord[0] = strtok(message, " ");

  //next uses of strtok on same string need NULL as input
  for(int i = 1; (i < MAX_INPUT_WORDS); i++){
    _queryWord[i] = strtok(NULL, " ");
  }


  //Print for DEBUG
  if(DEBUG){
    Serial.println("Q_Word =");
    for(int i = 0; (i < MAX_INPUT_WORDS); i++){
      Serial.print(i);
      Serial.print(": ");
      Serial.println(_queryWord[i]);
    }
  }

  return true;
  
}


void Query::executeAndRespond(){

  if(strcmp(_queryWord[0], '\0') == 0){ 
    return; 
  }else if(strcmp(_queryWord[0], START_OF_PATH_1) == 0){
    Path1  
  }else if(strcmp(_queryWord[0], START_OF_PATH_2) == 0){
    Path2
  }else if(strcmp(_queryWord[0], START_OF_PATH_3) == 0){
    Path3
  }else if(strcmp(_queryWord[0], START_OF_PATH_4) == 0){
    Path4
  }else if(strcmp(_queryWord[0], START_OF_PATH_5) == 0){
    Path5
  }else{
    if(ALLOW_RESPONSES){
      Serial.print("No valid queries starting with: \"");
      Serial.print(_queryWord[0]);
      Serial.println("\"");
    }
  }
}
