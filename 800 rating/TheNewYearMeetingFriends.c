#include <stdio.h>
#include <stdlib.h>
 
void sorter(int[], int*);
void initArr(int[], int*);
int midFinder(int[], int*);
int main()
{
    int s = 3;
    int *arr = (int*) calloc(3, sizeof(int));
    initArr(arr, &s);
    sorter(arr, &s);
    /*for (int ctr = 0; ctr < s; ctr++)
    {
        printf("%d, ", *(arr+ctr));
    }*/
    //int i = ((arr[2] - arr[1]) + (arr[1] - arr[0]));
    printf("%d", midFinder(arr, &s));
}
 
void initArr(int arr[], int *s)
{
    for (int ctr = 0; ctr < *s; ctr++)
    {
        scanf("%d", &*(arr+ctr));
    }
}
 
void sorter(int arr[], int *s)
{
    for (int ctr = 0; ctr < *s; ctr++)
    {
        int smallest = arr[ctr];
        for (int ctr2 = ctr; ctr2 < *s; ctr2++)
        {
            if(arr[ctr2] < smallest)
            {
                smallest = arr[ctr2];
                int temp = arr[ctr];
                arr[ctr] = arr[ctr2];
                arr[ctr2] = temp;
            }
        }
    }
}
 
int midFinder(int arr[], int*s)
{
    int dist1 = arr[1] - arr[0];
    //printf("%d, %d, %d\n", arr[2], arr[1], arr[0]);
    int dist2 = arr[2] - arr[1];
    int dist3 = dist1 + dist2;
    //1printf("%d, %d: %d", dist1, dist2, dist1+dist2);
    return dist3;
}
