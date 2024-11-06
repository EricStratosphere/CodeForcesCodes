#include <stdio.h>
int main() 
{
    int a, b, c, d, e, ctr=0;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);
    for (int i=1;i<=e;i++) 
    {
        if (i%a==0 ||
            i%b==0 ||
            i%c==0 ||
            i%d==0) 
            {
                ctr++;
            }
    }
    printf("%d", ctr);
}
