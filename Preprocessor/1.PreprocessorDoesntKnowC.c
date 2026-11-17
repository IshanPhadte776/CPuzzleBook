#include <stdio.h>
#define FUDGE(k) k+3.14159
#define PR(a) printf("a= %d\t",(int)(a))
#define PRINT(a) PR(a); putchar('\n')
#define PRINT2(a,b) PR(a); PRINT(b)
#define PRINT3(a,b,c) PR(a); PRINT2(b,c)
#define MAX(a,b) (a<b ? b : a)
main ()
{
    {
        int x = 2;
        //7, 7.14 becomes 7 eventually
        PRINT(x + FUDGE(2));
    }

    {
        int cel;
        for ( cel = 0; cel <= 100; cel += 50)
            PRINT2(cel, 9./5*cel+32);

        //expands to this because there's a lack of {}, just ;
        // for (cel = 0; cel <= 100; cel += 50)
        //     printf("a= %d\t", (int)(cel));   // <--- ONLY THIS STATEMENT IS IN THE LOOP!
        //     printf("a= %d\t", (int)(9./5*cel+32));
        //     putchar('\n');
    }

    {
        //max is expanded to (x++ < y ? y : x++)
        int x = 1, y = 2;
        //this is a preporcess macro, not a function call, so this is technically deterministic 
        //sub in x++ and u intp the macro 
        // 2 2 2 
        PRINT3(MAX(x++,y),x,y);
        //3 4 2
        PRINT3(MAX(x++,y),x,y);

    }


}