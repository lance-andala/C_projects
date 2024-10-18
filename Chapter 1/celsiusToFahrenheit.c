#include <stdio.h>

int main(){
    /*
    Asks for temperature in celsius and converts it to fahrenheit.
    */

    printf("What is the temperature in celsius: ");
    float celsius;
    scanf("%f", &celsius);

    printf("The temperature in fahrenheit is: %.2f\n",(celsius * 9/5) + 32);
    
    return 0;
}