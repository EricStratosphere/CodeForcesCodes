#include <stdio.h>
void sorting(int [][2], int);
int finctr(int [], int [][2], int, int);
int main() 
{
    int lim, ctr=0;
    scanf("%d", &lim);
    int arr[lim][2];
    while (ctr < lim) 
    {
        int ctr2=0;
        while(ctr2 < 2) 
        {
            scanf("%d", &arr[ctr][ctr2]);
            ctr2++;
        }
        ctr++;
    }
    sorting(arr, lim);
}
void sorting (int arr[][2], int lim)
{
    int new[lim];
    int ctr=0, ctr3=1;
    new[0] = arr[0][0];
    while(ctr<lim) 
    {
        int ctr2=0;
        while (ctr2<ctr3) 
        {
            if (new[ctr2] == arr[ctr][0]) 
                break;
            ctr2++;    
        }
        if(new[ctr2] == arr[ctr][0])
        {
            ctr++;
            continue;
        }
        else
            {
                ctr3++;
                new[ctr3-1] = arr[ctr][0];    
            }
        ctr++;    
    }
    ctr=0;
    int new2[ctr3];
    ctr=0;
    printf("\n");
    while (ctr<=ctr3)
    {
        new2[ctr] = new[ctr];
        ctr++;
    }
    printf("%d", finctr(new2, arr, ctr3, lim));
}
int finctr(int new2[], int arr[][2], int ctr3, int lim)
{
    int ctr=0, lefctr=0, rictr=0, temctr, finctr=0;
    while(ctr < ctr3) 
    {
        int ctr2=0;
        lefctr=0;
        rictr=0;
        while(ctr2<lim) 
        {
            if(new2[ctr] == arr[ctr2][0]) 
                lefctr++;
            ctr2++;    
        }
        ctr2=0;
        while(ctr2<lim) 
        {
            if(new2[ctr] == arr[ctr2][1]) 
                rictr++;
            ctr2++;    
        }
        temctr= lefctr*rictr;
        finctr+=temctr;
        ctr++;
    }
    return finctr;
}
