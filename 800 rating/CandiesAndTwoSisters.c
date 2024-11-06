#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int lim;
    scanf("%d", &lim);
    int *c;
    c = (int*) calloc(lim, sizeof(int));
    int ctr=0;
    while (ctr < lim)
    {
         scanf("%d", &*(c + ctr));
         ctr++; 
    }
    ctr=0;
    while(ctr<lim) 
    {
        int *pta;
        pta = &*(c+ctr);
        if(*pta % 2 == 0 && *pta > 2) 
            printf("%d\n", (*pta/2-1));
        else if(*pta%2>0 && *pta > 2)
            printf("%d\n", *pta/2); 
        else
            printf("0\n");   
        ctr++;
    }
}
