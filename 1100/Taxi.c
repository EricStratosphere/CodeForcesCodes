#include <stdio.h>
int main() 
{
    int limiter, ctr=0;
    int counter1=0, counter2=0, counter3=0, counter4=0, store2=0, store3=0;
    scanf("%d", &limiter);
    int num[limiter], store=0;
    while(ctr<limiter)
    {
        scanf("%d", &num[ctr]);
        if (num[ctr]==1) 
        {
        counter1++;
        }
        else if(num[ctr]==2)
        {
        counter2++;
        }
        else if(num[ctr]==3) 
        {
        counter3++;
        }
        else if(num[ctr]==4) 
        {
            counter4++;
        }
        ctr++;    
    }
    if (counter3>0) 
    {
        if (counter3>=counter1) 
        {
            counter1-=counter1;
        }
        else if (counter3<counter1) 
        {
            counter1=counter1-counter3;
        }
    }
    if(counter2>0) 
    {
        store3=counter2;
        if(counter2>1)
        {
            counter2=counter2/2;
        }
        else
        {counter2=0;}
        store3=store3%2;
            counter1=counter1-(store3*2);
            if(counter1<0) 
                counter1=0;
    }    
    if(counter1>0) 
    {
        store2 = counter1/4;
        if(counter1%4!=0) 
            store2++;
        counter1 = store2;     
    }
    store = counter1+counter2+counter3+counter4+store3;
    printf("%d", store);
    return 0;
}    
