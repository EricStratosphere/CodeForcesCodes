#include<stdio.h>
int main() 
{
    long long int lim, ctr=0, sum=0;
    scanf("%lld", &lim);
    if (lim%2==0) 
    {
       lim=lim/2;
    }
    else
    {
       long long int store= lim;
       lim = (lim/2)-store;
    }
    printf("%lld", lim);
}
