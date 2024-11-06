#include <stdio.h>
int main()
{
    int limit1, limit2,lim, num, val, num2 = 0, num3, prod = 1, initial, prod1 = 0, prod2 = 0;
    long long int bctr = 0, bnum = 0;
    int storer;
    scanf("%d", &limit1);
    long long int a[limit1][100];
    long long int b[limit1 * 100];
    for (lim = 0; lim < limit1;lim++)
    {
        scanf("%d", &limit2);
        for (num = 0; num < limit2; num++)
        {
            scanf("%d", &a[lim][num]);
        }
        for (num2 = 0; num2 < limit2; num2++)
        {
            initial = a[lim][num2];
            a[lim][num2] = a[lim][num2] + 1;
            prod1 = prod2;
            for (num3 = 0; num3 < limit2; num3++)
            {
                prod *= a[lim][num3];
            }
            prod2 = prod;
            if (prod2 > prod1)
            {
                prod1 = prod2;
            }
            else if (prod1 > prod2)
            {
                prod2 = prod1;
            }
            prod = 1;
            a[lim][num2] = initial;
        }
        b[bnum] = prod1;
        bnum++;
        prod2 = 0;
    }
    while (bctr<bnum)
        {
            printf("%d ", b[bctr]);
            bctr++;
        }
 
    return 0;
}
