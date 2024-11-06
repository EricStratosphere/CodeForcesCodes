#include <stdio.h>
 
int main()
{
    int lim;
    scanf("%d", &lim);
    for (int ctr=0; ctr<lim; ctr++)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        if (c > a && c > b)
        {
            printf("+\n");
        }
        else
            printf("-\n");
    }
}
