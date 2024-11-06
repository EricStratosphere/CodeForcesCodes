#include <stdio.h>
int main() 
{
    int limiter, ctr=0, sum=0;;
    scanf("%d", &limiter);
    char shape[20];
    while(ctr<limiter)
    {
        scanf("%s", shape);
        if(shape[0] == 'T') 
            sum+=4;
        else if(shape[0]=='C')
            sum+=6;
        else if(shape[0]=='O') 
            sum+=8;
        else if(shape[0]=='D') 
            sum+=12;
        else if(shape[0]=='I') 
            sum+=20;         
        ctr++;  
    }
    printf("%d", sum);
 
}
