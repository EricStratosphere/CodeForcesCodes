#include <stdio.h>
int main()
{
    int year, counter=1, nextYear, mod2, storeYear, modulo, repeater;
    scanf("%d", &year);
    nextYear=year+=1;
    while(counter>0)
    {
        storeYear=nextYear;
        while (nextYear/10!=0)
        {
            modulo = nextYear%10;
            repeater = nextYear/10;
            while(repeater/10>=0)
            {
                mod2 = repeater%10;
                if(mod2 == modulo)
                {
                    break;
                }
                if(repeater/10==0)
                {
                    break;
                }
                repeater=repeater/10;
            }
            if(mod2==modulo || repeater==modulo)
            {
                storeYear++;
                break;
            }
            nextYear=nextYear/10;
        }
        if (mod2==modulo || repeater==modulo)
        {
            nextYear=storeYear;
            continue;
        }
        else{
            printf("%d", storeYear);
            counter-=counter;
        }
    }
}
