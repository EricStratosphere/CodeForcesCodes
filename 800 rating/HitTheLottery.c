#include <stdio.h>
int main() 
{
    int num, ctr=0;
    scanf("%d", &num);
    if(num/100>0) 
    {
        while(num/100>0) 
        {
            if(num/100==0) 
                break;
            num-=100;
            ctr++;
        }
    }
    if(num/20>0) 
    {
        while(num/20>=0) 
        {
            if(num/20==0) 
                break;
            num-=20;
            ctr++;
        }
    }
    if(num/10>0) 
    {
        while(num/10>0) 
        {
            if(num/10==0) 
                break;
            num-=10;
            ctr++;
        }
    }
    if(num/5>0) 
    {
        while(num/5>0) 
        {
            if(num/5==0) 
                break;    
            num-=5;
            ctr++;
        }
    }
    if(num/1>0) 
    {
        while(num/1>0) 
        {
            if(num/1==0) 
                break;
            num-=1;
            ctr++;
        }
    }
    printf("%d", ctr);  
    return 0;
}
