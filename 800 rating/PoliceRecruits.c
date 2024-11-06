#include <stdio.h>
#include <stdlib.h>
 
int* initArr(int);
int main()
{
    int lim;
    scanf("%d", &lim);
    int temp = lim;
    int *x = initArr(lim);
    int recCtr = 0;
    int placeHolder[lim];
    for (int ctr = 0; ctr < lim; ctr++)
    {
        if (x[ctr] > 0)
        {
            placeHolder[recCtr] = ctr;
            recCtr++;
        }
    }
    lim = lim - recCtr;
    int ctr = 0;
    for (ctr = 0; ctr < recCtr-1; ctr++)
    {
        int a = placeHolder[ctr], b = placeHolder[ctr+1];
        int c = (b - a) - 1;
        a = placeHolder[ctr];
        if (x[a] > c){
            lim = lim - c;
            x[a] = x[a] - c;
        }
        else {
           // c = c - x[a];
            lim = lim - x[a];
            x[a] = 0;
        }
        x[b] += x[a];
    }
    if (recCtr > 0)
    {
        ctr = placeHolder[recCtr-1];
   //PROBLEM IS HERE
        if (ctr != temp - 1)
        {
            temp = (temp - ctr) - 1;
            if (temp >= x[ctr])
            {
                lim = lim - x[ctr];
            }
            else
            {
                lim = lim - temp;
            }
        }
    }
    printf("%d", lim);
}
int* initArr(int x)
{
    int *arr = (int*) calloc(x, sizeof(int));
    for (int ctr = 0; ctr < x; ctr++)
    {
        scanf("%d", &*(arr+ctr));
    }
    return arr;
}
