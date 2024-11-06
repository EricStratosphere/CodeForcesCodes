#include<stdio.h>
int main() 
{
    int limiter, num1, num2, ctr=0;
    scanf("%d", &limiter);
    while(ctr<limiter) 
    {
        scanf("%d", &num1);
        scanf("%d", &num2);
        if(num1%num2==0) 
        {
            printf("0\n");
            ctr++;
            continue;
        }
        num1 = num1%num2;
        num1 = num2-num1;
        printf("%d\n", num1);
        ctr++;
    }
}
