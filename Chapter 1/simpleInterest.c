#include <stdio.h>

int main(){
    //Simple interest program

    printf("What is the principal value: ");
    int principal;
    scanf("%i", &principal);

    printf("What is the interest charged: ");
    float interest;
    scanf("%f", &interest );

    printf("What are the number of years: ");
    float years;
    scanf("%f", &years);

    printf("The simple interest in acccordance to the values given is: %.2f\n", principal * (interest/ 100) * years);
    
    return 0;
}