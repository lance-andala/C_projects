#include <stdio.h>

//It calculates the sum osf the numbers occuring in the multiplication
// we are cosidering 8 * 1 to 8 * 10

int main(){

    int sum = 0;
    int num = 8;
    int i = 1;

    while (i < 11){
        sum = sum + (num * i);
        i++;
    }
    printf("%i\n", sum);

    return 0;
}