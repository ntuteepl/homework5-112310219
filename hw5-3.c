#include <stdio.h>
#include <stdlib.h>

int main()
{
    int wt,salary;
    double total;
    scanf("%d%d" , &wt , &salary);
    if (wt <= 60){
        total = wt * salary;
    }
    else if (wt >= 61 && wt <= 120){
        total = (60 * salary) + ((wt - 60) * salary * 1.33);
    }
    else if(wt >= 121){
        total = (60 * salary) + (60 * salary * 1.33) + ((wt - 120) * salary * 1.66);
    }
    printf("%0.1f" , total);
}

