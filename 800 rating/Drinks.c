#include <stdio.h>
int main()
{
    float limiter, counter = 0, orange, sum=0, store, orangeuwu;
    scanf("%f", &limiter);
    while (counter<limiter)
        {
            scanf("%f", &orange);
            sum=orange+sum;
            counter++;
        }
    orangeuwu = (sum/(100*limiter))*100;
    printf("%f", orangeuwu);
    return 0;
}
