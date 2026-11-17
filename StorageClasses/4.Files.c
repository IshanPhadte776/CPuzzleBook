#include "def.h"
#include "4.NLN.c"
#include "4.Reset.c"


int i = 1;

main () {
    auto int i,j;

    i = reset();

    for (j = 1; j <= 3;j++) {
        PRINT2(d,i,j);
        PRINT1(d,next(i));
        PRINT1(d,last(i));
        PRINT1(d,new(i+j));
    }
}

// i = 1  j = 1
// next(i) 11
// last (I) 10
// new (7)
// i = 1  j = 2
// next(i) 11
// last (I) 10
// new     10
