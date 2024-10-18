 #include <stdio.h>
// Single lINE COMMENT   This can be used at the end of a code
/*This is a multiline comment
 *can be used inside of a code
 *Generally comments are used to help reader understand code
*/

int main()
{
  printf("Number of eggs collected during the day: ");

  int eggs; //Number of eggs

  scanf("%i", &eggs);

  double dozen = (double) eggs / 12;

  printf("Number of trays on dozen: %f\n", dozen);
  return 0;
}
