#include <stdio.h>
#include <string.h>
int main() 
{
    char one[200], two[200];
    scanf("%s", &one);
    scanf("%s", &two);
    int lim= strlen(one), ctr=0;
    while(ctr<lim) 
    {
        if(one[ctr] == two[ctr]) 
        {
            printf("0");
        }
        else
        {
            printf("1");
        }
        ctr++;
    }
}
