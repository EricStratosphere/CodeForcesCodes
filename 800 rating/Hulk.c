#include <stdio.h>
int main()
{
    int limiter, ctr=0;
    scanf("%d", &limiter);
    while (ctr<limiter) 
    {
        if (ctr%2 == 0) 
        {
            printf("I hate ");
        }
        else 
        {
            printf("I love ");
        }
        ctr++;
        if(ctr == limiter) 
        {
            printf("it");
        }
        else
        {
            printf("that ");
        }
    }
 
 
}
