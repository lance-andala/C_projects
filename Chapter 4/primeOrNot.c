#include <stdio.h>

int main(){

    int prime = 1;    
    printf("Please enter a number: ");
    int n;
    scanf("%i", &n);
    int i = 2;
    
    
    while (i < n){
        if (n % i == 0){
            prime = 0;
            break;
        }
        i++;
    }

    if (prime){
        printf("The number %i is prime.\n", n);
    }else{
        printf("The number %i is not prime.\n", n);
    }
    /*
    printf("Please enter a number: ");
    int n;
    scanf("%i", &n);
    int i = 2;
    int prime = 1;

    for(i; i < n; i++){
        if (n % i == 0){
            prime = 0;
            break;
        }
    }

    if (prime){
        printf("The number %i is prime.\n", n);
    }else{
        printf("The number %i is not prime.\n", n);
    }
    */

    return 0;
}