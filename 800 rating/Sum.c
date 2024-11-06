#include <stdio.h>
int main()
{
    int lim, ctr1 = 0, sum = 0, storer;
    scanf("%d", &lim);
    int arr[lim][3];
    char yesorno[10000][50];
    while (ctr1 < lim)
    {
        int ctr2 = 0;
        while (ctr2 < 3)
        {
            scanf("%d", &arr[ctr1][ctr2]);
            ctr2++;
        }
        ctr2 = 0;
        while (ctr2<3)
        {
            storer = ctr2;
            int target = arr[ctr1][ctr2];
            ctr2 = 0;
            sum = 0;
            while (ctr2 < 3)
            {
                if (arr[ctr1][ctr2] != target || ctr2 != storer)
                {
                    sum = sum + arr[ctr1][ctr2];
                }
                ctr2++;
            }
            if (sum == target)
                {
                    yesorno[ctr1][0] = 'Y';
                    yesorno[ctr1][1] = 'E';
                    yesorno[ctr1][2] = 'S';
                    break;
                }
            else
                {
                    yesorno[ctr1][0] = 'N';
                    yesorno[ctr1][1] = 'O';
                }
            ctr2 = storer;
            ctr2++;
        }
        ctr1++;
    }
    ctr1 = 0;
    while (ctr1 < lim)
    {
        printf("%s\n", yesorno[ctr1]);
        ctr1++;
    }
}
