#include "def.h"
main ()
{
    static struct S1 {
        //2 member variables, c and s 
        char c[4], *s;
    } s1 = { "abc", "def" };

    static struct S2 {
        char *cp;
        struct S1 ss1;
    } s2 = { "ghi", { "jkl", "mno" } };

    //. operator is level 1, beats everything
    //a d
    PRINT2(c, s1.c[0], *s1.s);
    //string literal and char[] print is everything 
    //abc def 
    PRINT2(s, s1.c, s1.s);

    //ghi mno
    PRINT2(s, s2.cp, s2.ss1.s);
    //hi no (++1 means we move over by 1 byte)
    PRINT2(s, ++s2.cp, ++s2.ss1.s);
}

