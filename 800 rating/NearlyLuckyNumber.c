#include <stdio.h>
int main()
{
    long long int num, luckyCounter = 0, hiddenCounter = 0, ctr = 0, modulo;
    scanf("%lld", &num);
    for (ctr = num; ctr/10 != 0; ctr/=10)
    {
        modulo = ctr%10;
        if(modulo == 4)
        {
            luckyCounter++;
        }
        else if (modulo == 7)
        {
            luckyCounter++;
        }
        else
        {
            hiddenCounter++;
        }
    }
    //printf("%lld\n", ctr);
    if (ctr == 4 || ctr == 7)
    {
        luckyCounter++;
    }
    //printf("%lld, %lld\n", luckyCounter, hiddenCounter);
    if (luckyCounter == 4 || luckyCounter == 7)
    {
        printf("YES");
    }
    else if (hiddenCounter > 0)
    {
        printf("NO");
    }
    else
    {
        printf("NO");
    }
}
