#include <stdio.h>
#include <string.h>
int main()
{
    int num;
    scanf("%d", &num);
    int storer, counter=1, mod;
    if(num%4==0 || num%7==0)
        {
            printf("YES");
            return 0;
        }
    storer = num;
    while (counter <= num)
    {
        storer = num;
        if (num%counter == 0)
        {
            num = counter;
             while(num/10!=0)
            {
                mod = num%10;
                if (mod != 4 && mod != 7)
                {
                    break;
                }
                num=num/10;
            }
            if(num != 4 && num != 7)
            {
                num = storer;
                counter++;
                continue;
            }
            else if (mod !=4 && mod !=7)
            {
                num = storer;
                counter++;
                continue;
            }
            else if (num == 4 || num == 7 )
            {
                printf("YES");
                return 0;
            }
        }
        num = storer;
        counter++;
    }
    printf("NO");
    num = storer;
    return 0;
}
