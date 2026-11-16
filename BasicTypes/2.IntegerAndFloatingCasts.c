#include <stdio.h>
#define PR(x) printf("x = %.8g\t",(double)x)
#define NL putchar('\n')
#define PRINT4(x1,x2,x3,x4) PR(x1); P2(x2); P3(x3); PR(x4)

main () {
    double d;
    float f;
    long l;
    int i;

    // ilfd = 33
    i = l = f = d = 100/ 3; PRINT4(i,l,f,d);
    // ilfd = 33
    d = f = l = i = 100/ 3; PRINT4(i,l,f,d);
    // il= 33 fd = 33.33 
    i = l = f = d = 100/ 3.; PRINT4(i,l,f,d);
    // ilfd = 33
    d = f = l = i = (double)100/ 3; 
    PRINT4(i,l,f,d);


    i = l = f = d = (double) (100000 / 3);
    PRINT4(i,l,f,d);
    //33

    d = f = l = i = 100000 / 3; PRINT4(i,l,f,d);


}