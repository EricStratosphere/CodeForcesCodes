#include <stdio.h>
#include <string.h>
int main()
{
    int limiter, seconds, ctr = 0, storer;
    scanf("%d", &limiter);
    scanf("%d", &seconds);
    char queue[50];
    scanf("%s", queue);
    while (ctr < seconds)
    {
        int ctr2 = 0;
        while (ctr2 < limiter)
        {
            if (queue[ctr2] == 'B' && queue[ctr2+1] == 'G')
            {
                storer = queue[ctr2+1];
                queue[ctr2+1] = queue[ctr2];
                queue[ctr2] = storer;
                ctr2 = ctr2+2;
            }
            else
            {
                ctr2++;
            }
        }
        ctr++;
    }
    ctr = 0;
    printf("%s", queue);
}
