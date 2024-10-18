#include <stdio.h>

int main(){

    //Ask the radius of a circle to calculate its area
    printf("Radius of a the circle: ");
    int radius;
    scanf("%i", &radius);
    float area = (3.14 * radius * radius);
    // printf("The area of the circle is: %i\n", area);

    //Checks the volume of the cylinder
    printf("What is the height of the cylinder: ");
    int height;
    scanf("%i", &height);
    printf("The volume of the cylinder is: %f\n", height * area);
    return 0;
}