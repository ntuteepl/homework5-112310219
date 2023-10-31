#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hr , min ;
    float hangle , mangle , output;
    scanf("%d%d" , &hr , &min);
    hangle = (hr * 30) + (min * 0.5);
    mangle = (min * 6);
    if (hangle < mangle){
        output = mangle - hangle;
    }
    else if (hangle > mangle){
        output = hangle - mangle;
    }
    if (output > 180){
        output = output - 180;
    }
    else if (output < 0){
        output = output + 180;
    }
    printf("%0.3f" , output);

}

