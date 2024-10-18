#include <stdio.h>

int main()
{  
  char name[21];

  printf("Hi, what's your name: ");
  scanf("%s", name);

  printf("Hey, %s\nHave a nice day and remember to smile.\n", name);
  return 0;
}
