#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    int ctr = 0, ctr2 = 0, storer, ctr3 = 0;
    char arr[1000];
    char fin[500];
    scanf(" %s", &arr);
    while (ctr < strlen(arr))
    {
        storer = ctr;
        ctr = 0;
        ctr2 = 0;
        while (ctr < strlen(arr))
        {
            if (arr[storer] == arr[ctr])
            {
                if (storer != ctr)
                {
                    break;
                }
                fin[ctr3] = arr[storer];
                ctr3++;
            }
            ctr++;
        }
        ctr = storer;
        ctr++;
    }
    if (strlen(fin) % 2 == 0)
    {
        printf("CHAT WITH HER!");
        return 0;
    }
    else
    {
        printf("IGNORE HIM!");
        return 0;
    }
}
