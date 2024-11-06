#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int iterCtr(int);
void finCtr(int, int);
int main()
{
    int lim;
    int n;
    scanf("%d", &lim);
    for (int ctr = 0; ctr < lim; ctr++)
    {
        scanf("%d", &n);
        int ctr = iterCtr(n);
        finCtr(ctr, n);
    }
}
 
int iterCtr(int n)
{
    int ctr = 0;
    for (ctr = 0; n!=0; ctr++)
        n=n/10;
    return ctr;
}
 
void finCtr(int ctr, int n)
{
    int i=0, temp = n;
    int tempCtr = 0, mod = 0;
    for (i =0; i < ctr; i++)
    {
        if (n%10 != 0)
        {
            tempCtr++;
        }
        n=n/10;
    }
 
    n = temp;
 
    printf("%d\n", tempCtr);
    for (i =0; i < ctr; i++)
    {
        if (n%10 != 0)
        {
            mod = n%10;
            int temp2 = 1;
            for (temp = 0; temp < i; temp++)
            {
                temp2 *= 10;
            }
            mod = mod * temp2;
            printf("%d ", mod);
        }
        n=n/10;
    }
    printf("\n");
}
