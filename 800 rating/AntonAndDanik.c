#include <stdio.h>
#include <string.h>
int main()
{
    int lim, ctr =  0, ctrAnton = 0, ctrDanik = 0;
    scanf("%d", &lim);
    char standing[lim];
    scanf("%s", standing);
    int placeHolder = strlen(standing);
    while (ctr < placeHolder)
    {
        if (standing[ctr] == 'A')
        {
            ctrAnton++;
        }
        else if (standing[ctr] == 'D')
        {
            ctrDanik++;
        }
        ctr++;
    }
    if (ctrDanik > ctrAnton)
    {
        printf("Danik");
    }
    else if (ctrAnton > ctrDanik)
    {
        printf("Anton");
    }
    else
    {
        printf("Friendship");
    }
    return 0;
}
