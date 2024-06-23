#include <stdio.h>
int main()
{
    int lim, x = 0, ctr = 0, temp;
    scanf("%d", &lim);
    char num[lim][3];
    while(ctr < lim)
    {
        scanf("%s", &num[ctr]);
        ctr++;
    }
    temp = 0;
    int ctr2 = 0;
    while (temp < lim)
    {
        if (num[temp][1] == '+')
        {
            x++;
        }
        else if (num[temp][1] == '-')
        {
            x--;
        }
        temp++;
    }
    printf("%d", x);
    return 0;
}
