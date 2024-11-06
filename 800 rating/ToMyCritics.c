#include <stdio.h>
 
int main()
{
    int lim;
    scanf("%d", &lim);
    for (int ctr=0; ctr<lim; ctr++)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        if (a + b >=  10 || a + c >= 10 || b + c >= 10)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
