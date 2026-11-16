#define PRINT3(x,y,z) printf("x=%d\ty=%dtz=%d\n",x,y,z)

main() {
    int x,y,z;

    x = y = z = 1;

    ++x || ++y && ++z; PRINT3(x,y,z); // 2 1 1

    x = y = z = 1;
    ++x && ++y || ++z ; PRINT3(x,y,z); // 2 2 1 

    x = y = z = 1;
    ++x && ++y && ++z; PRINT3(x,y,z); // 2 2 2

    x = y = z =  -1;
    ++x && ++y || ++z ; PRINT3(x,y,z); // 0 -1  0

    x = y = z =  -1;
    ++x || ++y && ++z ; PRINT3(x,y,z); //  0 0 -1
    
    x = y = z = -1;

    ++x && ++y && ++z; PRINT3(x,y,z);   // 0 -1 - 1

}