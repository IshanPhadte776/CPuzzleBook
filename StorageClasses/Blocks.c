#include "def.h"

int i = 0;
main() {
    auto int i=1;
    //1
    PRINT1(d, i) ;
    {
        int i=2; //mkaes a new i variable cause of the int i portion 
        //1
        PRINT1(d,i);
        {
            //This doesn't create a new "i" variable, it uses and modifies the old one 
            i += 1;
            //3
            PRINT1(d,i);
        }
        //3
        PRINT1(d,i);

    }

    //1
    PRINT1(d,i);
}