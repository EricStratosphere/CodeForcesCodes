#include <stdio.h>
int main() 
{
    int limiter, ctr=0;
    int num[100];
    scanf("%d", &limiter);
    while (ctr<limiter) 
    {
        scanf("%d", &num[ctr]);
        ctr++;
    }
    ctr=0;
    int max=0, min=0;
    while(ctr<limiter) 
    {
        if (num[ctr] > max) 
        {
            max=num[ctr];
        }
        ctr++;
    }
    min = max;
    ctr=0;
    while (ctr<limiter) 
    {
        if (num[ctr] < min) 
        {
            min = num[ctr];
        }
        ctr++;
    }
    ctr=0;
    int ctr2=limiter-1;
    while (num[ctr] != max) 
    {
        ctr++;
    }
    while(num[ctr2] != min) 
    {
        ctr2--;
    }
    if (ctr > ctr2) 
    {
        int sum = ctr + ((limiter-1)-ctr2)-1;
        printf("%d", sum);
        return 0;
    }
    else 
    {
        int sum = ctr + ((limiter-1) - ctr2);
        printf("%d", sum);
        return 0;
    }
}
