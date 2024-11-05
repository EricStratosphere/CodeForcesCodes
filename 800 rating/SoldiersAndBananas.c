#include <stdio.h>
int loop (int, int);
int main()
{
    int k, n, w, ctr = 1, finval = 0;
    scanf("%d", &k);
    scanf("%d", &n);
    scanf("%d", &w);
    while (ctr <= w)
    {
        finval = finval + loop(k, ctr);
        ctr++;
    }
    if (finval > n)
    {
        n = finval - n;
        printf("%d", n);
    }
    else
    {
        printf("0");
    }
}
 
int loop (int a, int b)
{
    int store = a * b;
    return store;
}
