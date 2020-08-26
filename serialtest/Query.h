#ifndef QUERY_H
#define QUERY_H
#include "arduino.h"


//insert a path to were you keep your command file, surrounded with ""
#define PATH "Query_commands.h"


#define BAUD_RATE 115200
#define SERIAL_TIMEOUT 250   //timeout in microseconds

#define INPUT_SIZE 45    //how many characters are allowed, higher numbers can be buggy, bc serial 

//long words (like 15+) can be buggy, bc Serial and strtok(), i cant do anything about it
//try to keep commands simple like "LED -e" "Servo 2 -t 180"
#define MAX_INPUT_WORDS 5

#define ALLOW_RESPONSES true  //I recommend doing if(ALLOW_RESPONSES){ *response* } its a bit less annoying, not necessary though
#define Q_DEBUG true

#define QUERY_ENDING "\n"   //what's the last character sent, on windows \r\n, on arduino console its customizable



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
