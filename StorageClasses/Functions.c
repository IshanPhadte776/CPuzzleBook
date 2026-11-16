#include "def.h"

#define LOW 0
#define HIGH 5
#define CHANGE 2

int i = LOW;

main() {
    //i = 5
    auto int i = HIGH;
    //reset(2)
    reset(i/2); PRINT1(d,i); //5
    reset(i=i/2); PRINT1(d,i); //2
    i  = reset(i / 2); PRINT1(d,i);//5
    //0, 5
    workover(i); PRINT1(d,i);
}

workover(i)
int i;

{
    i = (i%i) * ((i*i)/ (2*i)+ 4);
    PRINT1(d,i);
    return(i);
}

int reset(i)
int i;

{
    i = i < CHANGE ? HIGH : LOW;
    return(i);
}