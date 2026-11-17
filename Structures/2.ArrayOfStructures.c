#include "def.h"
struct S1 {
    char *s;
    int i;
    struct S1 *s1p;
};

main(){

    static struct S1 a[] = {
        { "abcd", 1 , a+1 } ,
        { "efgh", 2, a+2 } ,
        { "ijkl", 3, a }
    };

    struct S1 *p = a;
    int i;

    //printing a char pointer prints everything 
    //abcd abcd abcd
    PRINT3(s, a[0].s, p->s, a[2].s1p->s);

    for ( i = 0; i < 1; i++ ) {
        //0
        PR(d, --a[i].i);
        //UB
        PR(c, ++a[1].s[3]);
        NL;
    }

    PRINT3(s, ++(p->s),a[(++p)->i].s, a[--(p->s1p->i)].s);
}