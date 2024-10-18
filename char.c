#include <stdio.h>

int main()
{
  char x;
  printf("Please enter a character: ");
  scanf("%c", &x);
  printf("%i\n", x);

  int integer;
  printf("Please enter an integer between 0 - 127 ");
  scanf("%i", &integer);
  printf("%c\n", integer);
  
  // math with ASCII
  char mathz = 'A' + '\t';
  printf("A(65) + \\t(11) = %c(%i)\n", mathz, mathz);
  return 0;

}
