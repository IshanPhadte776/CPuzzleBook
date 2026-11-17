#include "def.h"

int a[] = {0,1,2,3,4};

main () {
    int i, *p;

    for (i = 0;i <=4; i++) PR(d,a[i]); //1.1 0 1 2 3 4 
    NL;
    for(p = &a[0];p <=&a[4];p++)  
        PR(d,*p); //1.2 0 1 2 3 4 
    NL; NL;

    for ( p = &a[0], i=1; i<=5; i++)
        PR(d,p[i]);    //1.3 1 2 3 4 ?

    for (p=a,i=0; p+i <= a+4 ;p++,i++)
        PR(d,*(p+i)); //1.4  0 2 4
    NL; NL;

    for (p = a + 4;p >= a; p--) PR(d, *p); //1.5 4 3 2 1 0
    NL;
    for (p=a+4,i=0;i<=4;i++) PR(d,p[-i]); //1.6 4 3 2 1 0
    NL;
    for (p=a+4;p>=a;p--) PR(d,a[p-a]); //1.7 4 3 2 1 0
    NL;


}