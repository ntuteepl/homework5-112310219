#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a , b;
    scanf("%f", &a);
    a = (9.0/5.0)*a+32 ;
    b = (int)(a*10+0.5)/10.0;
    printf("%0.1f", b);
    return 0;
}

