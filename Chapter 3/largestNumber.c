#include <stdio.h>

int main(){

    printf("Enter 4 numbers:\n");
    int a, b, c, d;
    scanf("%i", &a);
    scanf("%i", &b);
    scanf("%i", &c);
    scanf("%i", &d);
    
    if (a > b && a > c && a > d){
        printf("%i is the greatest.\n", a);
    }
    else if (b > a && b > c && b > d){
        printf("%i is the greatest.\n", b);
    }
    else if (c > b && c > a && c > d){
        printf("%i is the greatest.\n", c);
    }
    else if (d > b && d > c && d > a){
        printf("%i is the greatest.\n", d);
    }
    else{
        printf("None was found.\n");
    }

    return 0;
}