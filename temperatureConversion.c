#include <stdio.h>
#include <ctype.h>

int main(){

  char unit;
  float temp;

  printf("\nIs the temperature in farhenheit (F) or celsius (C)?: ");
  scanf("%c", &unit);

   unit = toupper(unit);

  if(unit == 'C'){
    printf("The temp is currently in C: ");
    scanf("%f", &temp);
    temp = (temp * 9 / 5) + 32;
    printf("\nThe temp in Farhenheit is: %.2f\n", temp);
  }
  else if(unit == 'F'){
    printf("The temp is currently in F: ");
    scanf("%f", &temp);
    temp = (temp - 32) * 5 /9;
    printf("\nThe temp in celsius is: %.2f\n", temp);
  }
  else{
    printf("\n %c is not a valid unit of measurement", unit);
  }

  return 0;
}

