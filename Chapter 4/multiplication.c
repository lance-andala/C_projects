#include <stdio.h>

int main(){
    /*
    printf("Please a number you wish to know its multplition upto 15: ");
    int n;
    scanf("%i", &n);

    int  counter = 1;

    do{
    
        printf("%i * %i = %i\n", n, counter, n * counter );
        counter += 1;
    }
    while (counter < 16);
    */
    printf("Please a number you wish to know its multplition upto 15: ");
    int n;
    scanf("%i", &n);

    for (int counter = 1; counter < 16; counter++ ){
        printf("%i * %i = %i\n", n, counter, n * counter );
    }
    
    return 0;
}