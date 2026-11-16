#include <stdio.h>

#define PRINT(format,x) printf ("x = %format\n",x)

int integer = 5;
char character = '5';
char *string = "5";

main() {
    //d = int
    //address, 53, 5
    PRINT(d,string); PRINT(d,character); PRINT(d,integer);
    //s = string, c = character
    // f is for both float and double
    //"5".    5.     5
    PRINT(s,string); PRINT(c,character); PRINT(c, integer=53);
    //1
    PRINT(d,('5'>5));

    {
        int sx = -8;
        unsigned ux = -8;
        //o is unsigned int in octal 
        //2
        PRINT(o,sx); PRINT(o,ux);
        PRINT(o, sx >> 3); PRINT(o, ux >> 3);
        PRINT(d, sx >>3); PRINT(d, ux >> 3);

    }

}