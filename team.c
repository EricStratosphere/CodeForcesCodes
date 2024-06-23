#include <stdio.h>
int main()
{
    int lim, ctr = 0, ctr2 = 0, temp = 0, finval = 0;
    scanf("%d", &lim);
    int arr[lim][3];
    while (ctr < lim)
    {
        while (ctr2 < 3)
        {
            scanf(" %d ", &arr[ctr][ctr2]);
            ctr2++;
        }
        ctr2 = 0;
        while (ctr2 < 3)
        {
            if (arr[ctr][ctr2] == 1)
            {
                temp++;
                ctr2++;
                continue;
            }
            else if (arr[ctr][ctr2] == 0)
            {
                ctr2++;
                continue;
            }
        }
        if (temp >=2)
        {
            finval++;
        }
        temp = 0;
        ctr2 = 0;
        ctr++;
    }
    printf("%d", finval);
}
