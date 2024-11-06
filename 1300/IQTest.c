#include <stdio.h>
void checker(int*, int*, int[]);
int patternChecker(int*, int[]);
int main() 
{
    int lim;
    scanf("%d", &lim);
    int arr[lim];
    int ctr=0;
    checker(&ctr, &lim, arr);
}    
 
void checker(int *ctr, int *lim, int arr[])
{
    while (*ctr < *lim) 
    {
    //   printf("%d ", *ctr);
        scanf("%d", &arr[*ctr]);
    //   printf("%d ", arr[*ctr]);
        *ctr+=1;
    }
//    *ctr-=1;
//    printf("a %d, %d", *ctr+1, arr[*ctr]);
    patternChecker(&*lim, arr);
}
int patternChecker(int *lim, int arr[])
{
    int ctr=0, oddctr=0, evenctr=0;
   // printf(" testing %d, %d\n", arr[ctr], *lim);
    while(ctr < *lim) 
    {
        if(arr[ctr] % 2==0) 
            evenctr++;
        else
            oddctr++;    
        ctr++;
    }
    ctr=0;
    if(evenctr>oddctr) 
        {
            while(arr[ctr]%2==0) 
            {
                if(ctr == *lim) 
                    break;
                ctr++;
            }
            printf("%d", ctr+1);
            return 0;
        }
    else 
        {
            while(arr[ctr]%2!=0) 
            {
                if(ctr == *lim) 
                    break;
                ctr++;
            }
            printf("%d", ctr+1);
            return 0;
        }     
}
