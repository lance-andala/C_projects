#include <stdio.h>

int main(){

    printf("Please enter a character: ");
    char character;
    scanf("%c", &character);

    int x = (int) character;

    if (x >= 97 && x <= 122){
        printf("Lowercase.\n");
    }
    else {
        printf("Not lowercase.\n");
    }

    return 0;    
}