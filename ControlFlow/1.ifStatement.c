#include "def.h"

main() {
    int x, y = 1, z;

    if (y != 0) x = 5;
    //x = 5
    PRINT1(d,x);

    //x = 5
    if( y == 0) x = 3;
    else x=5;
    PRINT1(d,x);

    x = 1;
    if (y < 0) if (y > 0) x = 3;
    else x = 5;
    //x = 1, the second if is nested in the first if, else goes with the second if 
    //else block always binds to the closest if block, so else x = 5 binds to the inner if block 
    PRINT1(d,x);
    
    
    if ( z=y<0) x = 3;
    //z = 0, x = 1 y = 1
    else if (y == 0) x = 5;

    else x = 7;
    //x = 7, z = 0
    PRINT2(d,x,z);


    //x = 3 is run regardless
    if ( z = (y == 0)) x = 5; x = 3;
    //x = 3, z = 0
    PRINT2(d,x,z);

    if( x = z = y); x = 3;
    //x = 3, z.= 0
    PRINT2(d,x,z);



}