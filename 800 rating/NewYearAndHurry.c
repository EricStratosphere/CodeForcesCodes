#include <stdio.h>
#include <stdlib.h>
int* initArr(int);
void probCtr(int, int);
int main()
{
    int lim;
    scanf("%d", &lim);
    int time;
    scanf("%d", &time);
    probCtr (lim, time);
}
 
 
void probCtr(int s, int time)
{
    int sum = 0, ctr;
    for(ctr = 0; ctr < s; ctr++)
    {
        sum += 5*(ctr+1);
        //printf("sum[%d]: %d\n", ctr+1, sum);
        if (sum+time > 240)
            break;
    }
    if (sum+time > 240)
        printf("%d", ctr);
    else
        printf("%d", s);
}
