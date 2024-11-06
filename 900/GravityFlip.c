#include <stdio.h>
int main() 
{
    int lim;
    scanf("%d", &lim);
    int blocks[100], ctr=0;
    while (ctr < lim) 
    {
        scanf("%d", &blocks[ctr]);
        ctr++;
    }
    int ctr2 = lim-1, ctr4=0;
    while (ctr2 >= 0) 
    {
        int ctr3 = ctr2;
        while(ctr3 >= 0) 
        {
            if (blocks[ctr3] > blocks[ctr2]) 
            {
                int temp = blocks[ctr2];
                blocks[ctr2] = (blocks[ctr3] - blocks[ctr2]) + blocks[ctr2];
                blocks[ctr3] = blocks[ctr3] - (blocks[ctr3] - temp);
            }
            ctr3--;
        }
        if (ctr2==0)
        {
            break;
        }
        ctr2--;
    }
    ctr =0;
    while (ctr<lim) 
    {
       printf("%d ", blocks[ctr]);
       ctr++;
    }
    return 0;
}
