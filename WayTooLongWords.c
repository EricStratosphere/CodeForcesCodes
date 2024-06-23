#include <stdio.h>
#include <string.h>
int main()
{
    short num = 101, ctr;
    while (num > 100)
    {
    scanf("%d", &num);
    }
    char arr[num][200];
    char space;
    for (ctr = 0; ctr < num; ctr++)
    {
        scanf("%s%c", &arr[ctr], &space);
        printf(" \n");
    }
    for (ctr = 0; ctr < num; ctr++)
    {
        if (strlen(arr[ctr]) > 10)
        {
            printf("%c%d%c \n", arr[ctr][0], strlen(arr[ctr])-2, arr[ctr][strlen(arr[ctr])-1]);
        }
        else if (strlen(arr[ctr]) <= 10)
        {
            printf("%s\n", arr[ctr]);
        }
    }
    return 0;
}
