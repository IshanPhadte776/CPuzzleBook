#define PRINT(int) printf("%d\n",int)


main ( )
{
    int x,y,z;
    x = 2; y = 1; z = 0;

    x = x && y || z; PRINT(x); // x = 1
    PRINT(x || !y && z); //1
    //PRINT(x || ((!y) && z)); //

    //logical and > logical or 
    //uni operation is first 

    x = y = 1; //x = 1, y = 1, z = 0
    z = x ++ - 1; PRINT(x); PRINT(z); //x = 2, z = 0 
    z += - x ++ + ++y; PRINT(x); PRINT(z); //x = 3  z = 0 
    //unary operators > binary operatiors.
    //unary is right to left
    //z += (-(x++)) + (++y)
    z = x / ++ x; PRINT(z); // z = ??? 
}