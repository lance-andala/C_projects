#include <stdio.h>

int main()
{

  //Switch = A more efficient alternative to using many "else if" statements
  //allows a value to be tested for eqaulity against many cases

  char grade;

  printf("\nEnter a letter grade: ");
  scanf("%c", &grade);

  switch(grade) {
    case 'A':
      printf("Perefect!\n");
      break;
    case 'B':
      printf("You did good!\n");
      break;
    case 'C':
      printf("You did okay!\n");
      break;
    case 'D':
      printf("At least it's not an F!\n");
      break;
    case 'F':
      printf("You Failded!\n");
      break;
    default:
      printf("Enter a valid grade!");

  }

  return 0;
}
