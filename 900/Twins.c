#include <stdio.h>
void sorting(int, int []); 
int finalval(int, int []);
int main() 
{
    int lim, ctr=0;
    scanf("%d", &lim);
    int arr[lim];
    while(ctr<lim)
    {
        scanf("%d", &arr[ctr]);
        ctr++;
    }
    sorting(lim, arr); 
}
void sorting(int lim, int arr[]) 
{
    int ctr=0;
    while(ctr<lim) 
    {
        int temp = ctr;
        while(ctr<lim) 
        {
            if(arr[ctr] > arr[temp]) 
                {
                    int temp2 = arr[temp];
                    arr[temp] = arr[ctr];
                    arr[ctr] = temp2;
                }
            ctr++;     
        }
        ctr = temp;
        //printf("%d ", arr[ctr]);
        ctr++;
    }
    printf("\n%d", finalval(lim, arr));
}
int finalval(int lim, int arr[]) 
{
    int ctr=0;
    int sum1=0, sum2=0, temp;
    while (ctr<lim) 
    {
        temp=0;
        int temp2=ctr;
        sum1=0; sum2=0;
        while(temp<=ctr) 
        {
            sum1+=arr[temp];
            temp++;
        }
        ctr++;
        while(ctr<lim)
        {
            sum2 += arr[ctr];
            ctr++;
        }
        if(sum1>sum2) 
            break;
        ctr=temp2;
        ctr++;
    }
    return temp;
}
