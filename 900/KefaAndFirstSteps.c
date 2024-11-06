#include <stdio.h>
int main() 
{
    int limiter, ctr=0, finval=1, counter=0,lim=0;;
    scanf("%d", &limiter);
    int num=0;
    counter=finval;
    while (ctr<limiter) 
    {
        lim=num;
        scanf("%d", &num);
        if(num<lim) 
        {
            finval=1;
        }
       if(finval>counter) 
       {
           counter=finval;
       }
        finval++;
        ctr++;
    }
    printf("%d", counter);
}
