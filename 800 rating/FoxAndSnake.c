#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
void initLenWid(int*, int*);
void snek (int *, int*);
int main(void)
{
    int length, width;
    initLenWid(&length, &width);
    snek(&length, &width);
}
 
void initLenWid(int *length, int *width)
{
    scanf("%d", &*length);
    scanf("%d", &*width);
}
 
void snek(int *length, int *width)
{
    int ctr = 0, evenctr=0;
    for (ctr = 0; ctr < *length; ctr++)
    {
        if (ctr%2 ==0)
        {
            int ctr2=0;
            while (ctr2 < *width)
            {
                printf("#");
                ctr2++;
            }
            printf("\n");
        }
        else
        {
            evenctr++;
            if(evenctr%2 != 0)
            {
                int ctr2 = 0;
                while (ctr2 < *width - 1)
                {
                    printf(".");
                    ctr2++;
                }
                printf("#\n");
            }
            else if (evenctr%2 == 0)
            {
                int ctr2 = 0;
                printf("#");
                while (ctr2 < *width-1)
                {
                    printf(".");
                    ctr2++;
                }
                printf("\n");
            }
        }
    }
}
