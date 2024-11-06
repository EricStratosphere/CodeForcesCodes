#include <stdio.h>
#include <math.h>
int main()
{
    int day = 0, bacteriaCounter = 0, storeNumber = 0;
    long long int num = 0, bacteriaLimiter;
    scanf("%lld", &bacteriaLimiter);
    storeNumber = bacteriaLimiter;
    while(storeNumber >= 1)
    {
        num = pow(2,day);
        if (num == bacteriaLimiter)
        {
            bacteriaCounter++;
            break;
        }
        day++;
        if (pow(2,day) > storeNumber)
        {
            storeNumber = storeNumber - num;
            day = 0;
            bacteriaCounter++;
            continue;
        }
    }
    printf("%d", bacteriaCounter);
    return 0;
}
 
