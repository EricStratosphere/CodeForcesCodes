#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char arr[200];
    scanf("%s", arr);
    int ctr = 0, ctr2 = 0, ctr3 = 0;
    int num[strlen(arr)];
    while (ctr < strlen(arr))
    {
        if(arr[ctr] == '1')
        {
            num[ctr2] = arr[ctr] - '0';
            ctr2++;
        }
        else if (arr[ctr] == '2')
        {
            num[ctr2] = arr[ctr] - '0';
            ctr2++;
        }
        else if (arr[ctr] == '3')
        {
            num[ctr2] = arr[ctr] - '0';
            ctr2++;
        }
        ctr++;
    }
    ctr = 0;
 
    ctr = 0;
    int storer;
    int storer2;
    while (ctr < ctr2)
    {
        storer = ctr;
        while (ctr < ctr2)
        {
            if (num[ctr] > num[storer])
            {
                storer2 = num[storer];
                num[storer] = num[ctr];
                num[ctr] = storer2;
            }
            ctr++;
        }
        ctr = storer;
        ctr++;
    }
    ctr = 0;
    ctr3 = ctr2 - 1;
    while (ctr3 >= 0)
    {
        printf("%d", num[ctr3]);
        if(ctr3 == 0)
        {
            return 0;
        }
        printf("+");
        ctr3--;
    }
}
