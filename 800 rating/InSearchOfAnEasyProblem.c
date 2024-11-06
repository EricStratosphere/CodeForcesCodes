#include <stdio.h>
int main() 
{
    int limiter, counter=0, onecounter=0, opinion;
    scanf("%d", &limiter);
    while (counter<limiter) 
    {
        scanf("%d", &opinion);
        if (opinion==1)
        {
            onecounter++;
        }
        counter++;
    }
    if(onecounter>0) 
    {
        printf("HARD");
    }
    else
    {
        printf("EASY");
    }
    return 0;
}
