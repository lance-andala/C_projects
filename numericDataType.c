#include <stdio.h>

int main()
{
/*
  //int double float
  int dogs = 6;

  //floating point
  //precision -- how much data the variable can hold 
  printf("%i %f %f\n", 1, 1.1111111111111, 1.11111111111111);
*/
  printf("How many dogs do you have?: ");
  double dogs;

  scanf("%lf", &dogs);

  printf("%f\n%e\n%g\n", dogs, dogs, dogs);

  /*Conversion Characters
   * ***************************
   * %f - Decimal notation
   * %e - Scientific notation
   * %g - Computer decides
   *        < -4
   *        > 5
   */
  return 0;

}
