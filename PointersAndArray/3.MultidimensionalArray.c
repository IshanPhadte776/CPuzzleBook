#include "def.h"

int a[3][3] = {
    { 1, 2, 3 } ,
    { 4, 5, 6 } ,
    {7, 8, 9 }
};

int *pa[3] = {
    a[0], a [ 1 ] , a[2]
};

int *p = a [ 0 ] ;


main ()
{
    int i;
    for(i=0; i<3; i++)
        //postfix[] beats dereference 
        //arr[k] == *(arr+k)
        //3 1 1
        PRINT3(d, a[i][2-i], *a[i], *(*(a+i)+i));

    NL;

    for (i = 0; i < 3;i++)
        PRINT2(d, *pa[i], p[i]); //1  1

}