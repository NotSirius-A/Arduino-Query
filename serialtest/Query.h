#ifndef QUERY_H
#define QUERY_H
#include "arduino.h"
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
  
  public:
    Query();
      
    char* _queryWord[MAX_INPUT_WORDS];
    char* _query = "";

    void begin();
    void flush();
    char* recieve();
    bool split(char* query);
    void executeAndRespond();

};


#endif
