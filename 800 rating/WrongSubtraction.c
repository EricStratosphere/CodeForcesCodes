#include <stdio.h>
int main()
{
    int num, lim;
    scanf("%d", &num);
    scanf("%d", &lim);
    int storer = num;
    int ctr = 0;
    while (ctr < lim)
    {
        if (storer%10 > 0)
        {
            storer = storer-1;
        }
        else
        {
            storer = storer/10;
        }
        ctr++;
    }
    printf("%d", storer);
}
