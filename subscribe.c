/*
#include <stdio.h>

int main()
{
  int x; //hard coding
  x = 10;

  //Expression - Anything that can be evaluated (to 1 value)
  //statement
  //declaration
  //initialization

  int y = x / 4;

  printf("The magic number is: %i\nThe Value of x is %i\n", y, x);
  return 0;

}
*/

#include <stdio.h>

int main()
{
  int radius; //The distance from outside to center of the circle

  printf("Please enter a radius: ");

  scanf("%i", &radius); //address-of operator

  double area = 3.14159 * (radius * radius);

  printf("The area of a circle with %i radius is %f\n", radius, area);
  return 0;
}

//c is a space insensitive language
//Check Bro code on:
//1.Circle circumference program
//2.Hyotenuse Calculator program
//3.Tempurature conversion program
//4.Quiz Game
//5.Tic Tac Toe Game
//
