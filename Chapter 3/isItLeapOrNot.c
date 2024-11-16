#include <stdio.h>

//Checks whether a year is leap or not

int main(){

    printf("Please enter the year question: ");
    int year;
    scanf("%i", &year);

    if((year % 4 != 0)){
        printf("%i is a common year.\n", year);
    }
    else if(year %100 !=0){
        printf("%i is a leap year.\n", year);
    }
    else if(year %400!= 0){
        printf("%i is a common year.\n", year);
    }
    else {
        printf("%i is a leap year.\n", year);
    }

    return 0;
}