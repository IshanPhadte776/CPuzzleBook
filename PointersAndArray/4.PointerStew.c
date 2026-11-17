#include "def.h"

char*c[] = {
    "ENTER",
    "NEW" ,
    "POINT",
    "FIRST"
};

char **cp[] = { c+3, c+2, c+1, c };
char ***cpp = cp;

main () {
    printf("%s", **++cpp ); //POINT
    //per +3, -> address of ENTER, +3 moves pointer to E, so we get ER
    printf("%s ", *--*++cpp+3 ); 

    //cpp[-2] -> cp[0] which holds c + 3 -
    //dereferences it gets u First 
    //+ 3 moves the pointer to S, so ST
    printf("%s", *cpp[-2]+3 );

    printf("%s\n", cpp[-1][-1]+1 );
}

//POINT|ER |ST|EW