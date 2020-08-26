#ifndef QUERY_H
#define QUERY_H
#include "arduino.h"

#define BAUD_RATE 115200
#define SERIAL_TIMEOUT 250   //timeout in microseconds

#define INPUT_SIZE 45    //how many characters are allowed, higher numbers can be buggy, bc serial 
//also long words (like 15+) can be buggy, bc Serial and strtok(), i cant do anything about it
//try to keep commands simple like "LED -e" "Servo 2 -t 180"
#define MAX_INPUT_WORDS 5

#define Q_WORD_path1 "LED"
#define Q_WORD_path2 "sth"

#define ALLOW_RESPONSES true  //I recommend doing if(ALLOW_RESPONSES){ *response* } its a bit less annoying, not necessary though
#define DEBUG false

#define QUERY_ENDING "\n"   //what's the last character sent, on windows \r\n, on arduino console its customizable


#define START_OF_PATH_1 "1"
#define START_OF_PATH_2 "2"
#define START_OF_PATH_3 "3"
#define START_OF_PATH_4 "4"
#define START_OF_PATH_5 "5"

#define Path1 Serial.println("Path1");
#define Path2 Serial.println("Path2");
#define Path3 Serial.println("Path3");
#define Path4 Serial.println("Path4");
#define Path5 Serial.println("Path5");


class Query{

  public:
    Query();
      
    char* _queryWord[MAX_INPUT_WORDS];
    char* _query = "";

    void flush();
    char* recieve();
    bool split(char* query);
    void executeAndRespond();

};


#endif
