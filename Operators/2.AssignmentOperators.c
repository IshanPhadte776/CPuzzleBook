#define PRINTX printf("%d\n",x)

main() {
    int x = 2, y, z;

    x *= 3 + 2; PRINTX; // 10
    x *= y = z = 4; PRINTX; //x = 40, y = 4, z = 4
    x = y == z; PRINTX;  // x = 1
    x == (y = z); PRINTX; // x = 1
    //y = z return 4, (the value of y) x == 4 is false, x doesn't change

}