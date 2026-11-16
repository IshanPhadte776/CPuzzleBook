main ( )
{
int X;

    x = -3 + 4 * 5 + 6; printf("%d\n",x); //11
    //For mod, the side is always equal to the left side 
    x = 3 + 4 % 5 - 6; printf("%d\n",x); //1    4 % 5 = 4

    x = -3 * 4 % -6 / 5; printf("%d\n",x); // 0
    x = (7 + 6) % 5 / 2; printf("%d\n",x); // 1  -> 13 % 5 -> 3. 3/ 2 -> 1.5 -> 1
}