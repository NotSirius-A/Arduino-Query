#ifndef QUERY_CONFIG_H
#define QUERY_CONFIG_H


/* !********* PATH *********! */

/*  leave this if you haven't changed the Query_commands.h's place otherwise:
    insert a path to were you wish to keep your Query_commands.h, surrounded with ""  
    will generate errors if not specifed correctly*/
#define PATH "Query_commands.h"

/* !********* PATH *********! */


/* !********* DEBUG *********! */

#define Q_DEBUG true

/* !********* DEBUG *********! */

/*  115200 is good  */
#define BAUD_RATE 115200

/*  timeout in microseconds */
#define SERIAL_TIMEOUT 250   

/*  how many characters are allowed, higher numbers can be buggy, bc serial */
#define INPUT_SIZE 45    

/*  long words (like 15+) can be buggy, bc Serial and strtok(), i cant do anything about it
    try to keep commands simple like "LED -e" "Servo 2 -t 180"  */
#define MAX_INPUT_WORDS 5

/*  what's the last character sent, on windows \r\n, on arduino console its customizable but default is \n  */
#define QUERY_ENDING "\n"   

/*  I recommend doing if(ALLOW_RESPONSES){ *response* } its a bit less annoying, not necessary though  */
#define ALLOW_RESPONSES true 
 

#endif
