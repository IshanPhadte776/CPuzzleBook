#include "def.h"

//Tricks to know 
//functions can see main() local variab;e 
//pass by value are throwaway local copies
//auto local variable reset on ecery function call 
//static local variables initialize and persist across calls 

int i = 1;

main() {
    //automatic storage class specifier 
    auto int i,j;
    i = reset();
    for (j = 1; j <= 3; j++) {
        PRINT2(d,i,j);
        PRINT1(d,next(i));
        PRINT1(d,last(i));
        PRINT1(d,new(i+j));
    }
}

int reset(){
    return (i);
}

int next(j)
int j;
{
    return (j = i++);
}

int last(j)
int j;
{
    static int i = 10;
    return (j = i--);
}

int new(i)
int i;
{
    auto int j = 10;
    return (i = j += i);
}

//i = 1 j = 1 
//next(i) = 1
//last(i) = 10
//new(i+j) = 12
//i = 1 j = 2
//next(i) = 2
//last(i) = 9
//new( i+j) = 13