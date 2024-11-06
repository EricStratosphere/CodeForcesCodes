#include <stdio.h>
int main()
{
    int lim;
    int x, y, n;
    scanf("%d", &lim);
    for(int i = 0; i < lim; i++)
    {
        scanf("%d %d %d", &x, &y, &n);
        int q = n/x;
        if(q*x + y <= n){
            printf("%d\n", q*x + y);
        }
        else
            printf("%d\n", q*x - (x-y));
    }
}
