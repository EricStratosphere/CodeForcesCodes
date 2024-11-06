#include <stdio.h>
int main()
{
    long long int limiter, stopper;
    scanf("%lld", &limiter);
    scanf("%lld", &stopper);
    if (limiter%2!=0)
    {
        limiter=(limiter/2)+1;
        if (stopper>limiter)
        {
            stopper = stopper - limiter;
            printf("%lld", stopper*2);
        }
        else if (stopper<=limiter)
        {
            printf("%lld\n", stopper*2-1);
        }
    }
    else if (limiter%2==0)
    {
        if (stopper>limiter/2)
        {
            stopper = stopper - (limiter/2);
            printf("%lld", stopper*2);
        }
        else if (stopper<=limiter/2)
        {
            printf("%lld", (stopper*2)-1);
        }
    }
}
