/*
  Query.h - Library for creating and managing arduino queries.
  Created by NotSirius-A 
  Open source
  
  Author: https://github.com/NotSirius-A
  Library: https://github.com/NotSirius-A/Arduino-Query
*/

#ifndef QUERY_H
#define QUERY_H
#include <Arduino.h>
#include "Query_config.h"

class Arduino_Query{
  private:
    void Path1();
    void Path2();
    void Path3();
    void Path4();
    void Path5();
    void Path6();
    void Path7();
    void Path8();
    void Path9();
	  
	char* _queryWord[MAX_INPUT_WORDS];
    char* _query = "";
  
  public:
    Query();
      
    void begin();
    char* receive();
    bool split(char* query);
    void executeAndRespond();
	void flush();

};


#endif
