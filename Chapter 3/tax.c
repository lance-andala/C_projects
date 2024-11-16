#include <stdio.h>

int main(){

    printf("Amount paid: ");
    float salary;
    scanf("%f", &salary);
    float tax = 0;

    if (salary > 2.5 && salary < 5){
        tax = 0.05 * (salary - 2.5);
        printf("%.2f\n", tax);
    }
    else if(salary > 5.0 && salary < 10 ){
        tax = 0.05 * (salary - 2.5);
        tax = tax + 0.2 * (salary - 5.0);
        printf("%.2f\n", tax);
    }
    else if(salary > 11.0  ){
        tax = 0.05 * (salary - 2.5);
        tax = tax + 0.2 * (salary - 5.0);
        tax = tax + 0.3 * (salary - 10.0);
        printf("%.2f\n", tax);
    }
    else{
        printf("Lucky bastard.\n");
    }
    return 0;
}