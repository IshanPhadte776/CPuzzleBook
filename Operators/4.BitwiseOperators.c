#define PRINT(int) printf("int = %d\n",int)

main () {
    int x,y,z;

    x = 03; y = 02; z = 01;

    //bitwise and beats bitwise xor which beats bitwise or 
    PRINT(x | y & z); // 3
    PRINT(x | y & ~z); //3
    PRINT(x ^ y & ~ z); //1
    //bitwise beats logical for priority
    PRINT(x & y && z); // 1

    x = 1; y = -1;
    //!0 flips from 0 -> 1 and 1 -> 0
    PRINT(!x | x); //1
    //~ flips the bits
    PRINT(~x | x); // all bits are 1, 1111 1111 -> this is -1 in 2s complement
    PRINT(x ^ x); // 0
    x <<= 3; PRINT(x);  //8 
    y <<= 3; PRINT(y); //-8
    y >>= 3; PRINT(y); //? can't do a shift right for a negative, shift left is fine for negatives

}