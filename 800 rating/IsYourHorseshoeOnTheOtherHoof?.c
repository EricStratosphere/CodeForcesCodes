#include <stdio.h>
int main() 
{
    int horseshoe[4], lim, ctr=0, difShoecounter=0;
    int i[10];
    while (ctr<4) 
    {
        scanf("%d", &horseshoe[ctr]);
        ctr++;
    }
    ctr=0;
    i[ctr] = horseshoe[ctr];
    int ctr2=0;
    ctr++;
    while (ctr < 4) 
    {
        int temp = ctr;
        ctr = 0;
        while (ctr<=ctr2) 
        {
            if (horseshoe[temp] == i[ctr]) 
            {
                difShoecounter++;
                break;
            }
            ctr++;
        }
        if (horseshoe[temp] == i[ctr]) 
            {
                ctr = temp;
                ctr++;
                continue;
            }
        else
        {
            ctr2++;
            i[ctr2] = horseshoe[temp];
            ctr = temp;
            ctr++;
        }    
    }
    ctr = 0;
    printf("%d\n", difShoecounter);
}
