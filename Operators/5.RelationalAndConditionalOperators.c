
#define PRINT(int) printf("int = %d\n",int)

main() {
    int x=1,y=1,z=1;

    x += y += z;

    //x = 3 y = 2 z = 1
    PRINT(x < y ? y : x); //prints x = 3
    PRINT(x < y ? x ++ : y ++); //prints(2) y=3
    PRINT(x); PRINT(y); // x = 3 y=3

    //? > beats += for priopty 
    // (z += (x < y ? x ++ : y ++))
    PRINT(z += x < y ? x ++ : y ++); 
    
    PRINT(y); PRINT(z);
    //y = 4 z = 4

    x=3; y=z=4;

    PRINT((z >= y >= x) ? 1 : 0); //0
    //((z >= y) >= x).  z >= y -> 1 1 >= x false -> 0
    //>= beats &&
    PRINT(z >= y && y >= x); //1


}