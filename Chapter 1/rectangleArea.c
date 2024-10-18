/*
A program used to calculate area of a rectangle
*/

#include <stdio.h>

int main(){
    // HardCoded
    //int length = 32;
    //int width = 23;
    
    //Get dimension of length
    printf("What is the length of the rectangle: ");
    int length;
    scanf("%i", &length);
    
    //Gets dimension of the width
    printf("What is the width of the rectangle: ");
    int width;
    scanf("%i", &width);

    //Gets the area of the rectangle
    printf("The area of rectangle with length %i, and widhth %i is: %i\n", length, width, length * width);
    
    return 0;

}