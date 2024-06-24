#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char firstString[100];
    char secondString[100];
    scanf("%s", &firstString);
    scanf("%s", &secondString);
    int lim1 = strlen(firstString), ctr = 0;
    while (ctr<lim1)
    {
        firstString[ctr] = tolower(firstString[ctr]);
        secondString[ctr] = tolower(secondString[ctr]);
        ctr++;
    }
    ctr=0;
    while (ctr<lim1)
    {
        if (firstString[ctr]!=secondString[ctr])
        {
            int num1 = firstString[ctr];
            int num2 = secondString[ctr];
            if(num1<num2)
            {
                printf("-1");
                return 0;
            }
            else
            {
                printf("1");
                return 0;
            }
        }
        ctr++;
    }
    printf("0");
    return 0;
}
