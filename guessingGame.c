//The user has to guess a number from 0 - 5.
//output whether or not the person is correct

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  //Generate a random number
  //pseudo random number
  
  int maxValue = 5;
  srand(time(NULL));
  int randomNumber = rand() % (maxValue + 1);

  //printf("%d\n", randomNumber);

  printf("Guess a number  0 - %d: " , maxValue);
  int input;
  scanf("%d", &input);

  if(input == randomNumber)
  {
    printf("You win!\n");
  }else
  {
    printf("You lose!\n");
  }

}


