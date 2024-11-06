#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
void largestFinder(int[], int);
int* initArr(int);
void finCtr (int[], int, int);
int main()
{
    int lim;
    scanf("%d", &lim);
    int *x = (int*) calloc(lim, sizeof(int));
    x = initArr(lim);
 
}
 
int* initArr(int lim)
{
    int *x = (int*) calloc(lim, sizeof(int));
    for(int ctr = 0; ctr < lim; ctr++)
    {
        scanf("%d", &x[ctr]);
    }
    largestFinder(x, lim);
}
 
void largestFinder(int x[], int lim)
{
    int largest = x[0];
    for(int ctr = 0; ctr < lim; ctr++)
    {
        if (x[ctr] > largest)
            largest = x[ctr];
    }
//    printf("%d", largest);
    finCtr(x, lim, largest);
}
 
 
void finCtr (int x[], int lim, int largest)
{
    int finalCtr = 0;
    for (int ctr = 0; ctr < lim; ctr++)
    {
        if (x[ctr] < largest)
        {
            int temp = largest - x[ctr];
            finalCtr += temp;
        }
    }
    printf("%d", finalCtr);
}
