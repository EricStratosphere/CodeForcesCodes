#include <stdio.h>
#include <string.h>
#include <math.h>
 
int main()
{
    int size;
    scanf("%d", &size);
    for(int i = 0; i < size; i++)
    {
        int s2;
        scanf("%d", &s2);
        int wrongOdd = 0, wrongEven = 0;
        int temp;
        for(int j = 0; j < s2; j++)
        {
            scanf("%d", &temp);
            if(j % 2 == 0 && temp % 2 != 0)
            {
                wrongEven++;
            }
            else if(j % 2 != 0 && temp % 2 == 0)
            {
                wrongOdd++;
            }
        }
        //printf("%d, %d\n", wrongEven, wrongOdd);
        if((wrongEven == wrongOdd) && (wrongEven + wrongOdd) % 2 == 0)
        {
            printf("%d\n", (wrongEven + wrongOdd) / 2);
        }
        else
            printf("-1\n");
    }
}
