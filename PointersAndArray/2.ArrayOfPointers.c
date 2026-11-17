#include "def.h"

int a[] = {0,1,2,3,4};
int *p[]= {a,a+1,a+2,a+3, a+4};
int **pp = p;

main () {
    PRINT2(d,a,*a); //address of a, 0  
    PRINT3(d,p,*p,**p); //address of p, address of a,  0
    PRINT3(d,pp,*pp,**pp); //address of p, address of a, 0
    NL;

    //array subtraction works like array arithemtic 
    //Dereferences beats binary subtraction 
    pp++; PRINT3(d,pp-p,*pp-a,**pp); //1  1   1
    //postfix beats *dereference 
    //pp = second element address &(a+2)
    *pp++; PRINT3(d,pp-p,*pp-a,**pp); //2 2 2
    //increment pp so it points to the third element address 
    *++pp; PRINT3(d,pp-p,*pp-a,**pp); // 3 3 3 
    // a+ 3 -> a+ 4. 
    ++*pp; PRINT3(d,pp-p,*pp-a,**pp); //3 4 4

    NL;

    pp=p;
    //pp is at the first element address
    **pp++; PRINT3(d,pp-p,*pp-a,**pp); // 1 1 1 
    //second address
    *++pp; PRINT3(d,pp-p,*pp-a,**pp); // 2 2 2
    ++**pp; PRINT3(d,pp-p,*pp-a,**pp); // 2 2 3

}