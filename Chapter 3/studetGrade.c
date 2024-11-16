#include <stdio.h>

int main(){
    //Asks studet the marks he makes in three subjects

    printf("What did you score in maths: ");
    int maths;
    scanf("%i", &maths);

    printf("What did you score in english: ");
    int english;
    scanf("%i", &english);

    printf("What did you score in science: ");
    int science;
    scanf("%i", &science);

    float average = (float) (science + english + maths) / 3;

    if(average >= 40){
        if (maths > 33 || science < 33 || english < 33){
            printf("Fail\n");
        }
        else{
            printf("Pass\n");
        }        
    }
    else{
        printf("Fail\n");
    }

    return 0;
}