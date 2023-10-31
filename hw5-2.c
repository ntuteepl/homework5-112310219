#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input;
    double count ;
    scanf("%d" , &input);
    if (input <= 800){
        count = input *0.9;
    }
    else if(input > 800 && input < 1500){
        count = input *0.81;
    }
    else {
        count = input *0.9*0.79;
    }
    printf("%0.1f\n" , count);
}

