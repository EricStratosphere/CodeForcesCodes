#include <stdio.h>
#include <stdlib.h>
 
int* initArr(int);
int counter(int[], int*, int*, int);
int main()
{
    int lim;
    scanf("%d", &lim);
    int *x = (int*) calloc (lim, sizeof(int));
    x = initArr(lim);
    int largest = 0, smallest = 0;
    printf("%d", counter(x, &largest, &smallest, lim));
}
 
int* initArr (int lim)
{
    int *a = (int*) calloc (lim, sizeof(int));
    for (int ctr = 0; ctr < lim; ctr++)
    {
        scanf("%d", &*(a + ctr));
    }
    return a;
}
int counter(int x[], int*largest, int*smallest, int lim)
{
     int large = x[0], small = x[0];
     for (int ctr = 0; ctr < lim; ctr++)
     {
        if(x[ctr] > large)
        {
            large = x[ctr];
            *largest = *largest + 1;
        }
        if(x[ctr] < small)
        {
            small = x[ctr];
            *smallest = *smallest + 1;
        }
     }
     return *smallest+*largest;
 
