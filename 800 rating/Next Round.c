#include <stdio.h>
int main()
{
    int ctr = 0, lim, standard, ctr2 = 0;
    scanf("%d", &lim);
    int arr[lim];
    scanf("%d", &standard);
    while(ctr < lim)
    {
        scanf("%d", &arr[ctr]);
        ctr++;
    }
    ctr = 0;
    while(ctr<lim)
    {
        if (arr[ctr] >= arr[standard-1] && arr[ctr] > 0)
        {
            ctr2++;
        }
        ctr++;
    }
    printf("%d", ctr2);
}
