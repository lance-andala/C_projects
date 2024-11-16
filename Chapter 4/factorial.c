#include <stdio.h>

//A program that calculates the factoral of a given number

int main(){

    printf("Please input a number: ");
    int n;
    scanf("%i", &n);
    int factorial = 1;

    for(int counter = 1; counter <= n; counter++) {

        factorial *= counter;
    }

    printf("%i\n", factorial);
    return 0;  
    
    
}