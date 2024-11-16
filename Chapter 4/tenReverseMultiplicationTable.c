#include <stdio.h>

int main()
{  
    int n = 10;

    for (int counter = 15; counter > 0; counter -= 1){
        printf("%i * %i = %i\n", n, counter, counter * n);
    }
    
    return 0;
}