#include <stdio.h>

int main()
{   
    /*
    *There are four major data types in C
    *1. int
    *2. float - single precision floating point number
    *3. char - storing characters (enclosed in '') "A" is invalid; 'A; is valid
    *4. Double - double precision floating point number
    *5, String - array of char []
    */
    printf("Type a number that is divisible by 97: ");
    int a;
    scanf("%i", &a);
    printf("If the answer is o then it is divisible any other answer not divisible: %d\n", a%97);
    return 0;
}