#include <stdio.h>

int main(){
    /*
    int counter = 0;
    int addition = 0;

    while(counter < 10){
        counter ++;
        addition +=counter;        
    }
    printf("The sum of the first ten natural numbers is: %i\n", addition);
*/

    int i;
    int sum;

    for(i = 1; i < 11; i++ ){
        sum += i;
    }

    printf("The sum of the first ten natural numbers is: %i\n", sum);
    return 0;
}