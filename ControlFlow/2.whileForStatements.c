#include "def.h"

main() {
    int x,y,z;


    x = y = 0;

    while(y < 10) ++y; x += y;
    //x = y = 10
    PRINT2(d,x,y);

    x = y = 0;
    while (y < 10) x += ++y;
    //x = 55, y = 10
    PRINT2(d,x,y);

    y = 1;
    while( y < 10) {
        x = y++; z = ++y;
    }
    //x. =9 ,  y,z =11
    PRINT3(d,x,y,z);


    //The third condition y++, runs at the end of a loop 
    for (y = 1; y < 10; y++) x = y;
    //x = 9, y = 10
    PRINT2(d,x,y);

    //x = y = 10
    for(y = 1; (x = y) <10;y++);
    PRINT2(d,x,y);

    //x • 0 y = 1000 (Control Flow 2.6)
    // x .. 1 Y .. 100
    // x .. 2 Y .. 10
    for(x = 0, y = 1000; y>1; x++, y/=10)
    PRINT2(d,x,y);

}