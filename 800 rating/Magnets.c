#include <stdio.h>
int main() 
{
    int lim, ctr=0, groupCounter=0;
    scanf("%d", &lim);
    int magnet[lim];
    while (ctr<lim) 
    {
        scanf("%d", &magnet[ctr]);
        ctr++;
    }
    ctr=0;
    while(ctr<lim) 
    {
        if (magnet[ctr] != magnet[ctr+1]) 
        {
            groupCounter++;
        }
        else if (ctr==lim-1) 
        {
            groupCounter++;
        }
        ctr++;
    }
    printf("%d", groupCounter);
}
