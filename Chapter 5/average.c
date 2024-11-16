#include <stdio.h>

//A function that find the average of three integer
//Function declaration
int average(int x, int y, int z);

int main(){

    int value = average(51, 5, 5);
    printf("%i\n", value);
    return 0;
}

//Function body
int average(int x, int y, int z){
    return (x + y + z)/3;
}