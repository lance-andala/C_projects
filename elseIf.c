//doctors office
//1. Add a patient
//2. View a patient
//3. Search patients
//4. exit
//

#include <stdio.h>


int main()
{
  printf("Choose a menu option 1-4:\n");
  printf("1. add a patient\n");
  printf("2. View a patient\n");
  printf("3. Search patients\n");
  printf("4. exit\n");

  int input;
  scanf("%d", &input);

  if(input == 1)
  {
    printf("Adding a patient\n");
  }else if (input == 2)
  {
    printf("Viewing a patient");
  }else if (input == 3)
  {
    printf("Searching patients");
  }else if (input == 4)
  {
    printf("Exiting....");
  }else
  {
    printf("Incorrect input");
  }

  return 0;

}

