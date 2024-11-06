#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
void initDragon(void);
int yesOrNo(int*, int*);
void sorter(int[][2], int*);
int main()
{
    initDragon();
}
 
void initDragon(void)
{
    int initialLevel, numOfDragons;
    scanf("%d", &initialLevel);
    scanf("%d", &numOfDragons);
    yesOrNo(&initialLevel, &numOfDragons);
}
 
int yesOrNo (int *initialLevel, int *numOfDragons)
{
    int ctr = 0;
    int arr[*numOfDragons][2], beenThereCtr=0;
    int *beenThere = (int*) calloc(*numOfDragons, sizeof(int));
    while (ctr < *numOfDragons)
    {
        scanf("%d", &arr[ctr][0]);
        scanf("%d", &arr[ctr][1]);
        ctr++;
    }
    sorter(arr, &*numOfDragons);
    ctr = 0;
    while (ctr < *numOfDragons)
    {
        if (*initialLevel > arr[ctr][0])
        {
            *initialLevel += arr[ctr][1];
        }
        else
        {
            printf("NO");
            return 0;
        }
        ctr++;
    }
    printf("YES");
}
 
void sorter (int arr[][2], int *lim)
{
    int ctr = 0;
    while (ctr < *lim)
    {
        int ctr2 = ctr;
        int smallest = arr[ctr][0];
        while (ctr2 < *lim)
        {
            if (arr[ctr2][0] < smallest)
            {
                smallest = arr[ctr2][0];
                int temp = arr[ctr][0]; // 7 4, 2 3, 1 5
                arr[ctr][0] = arr[ctr2][0]; // 2 4, 2 3, 1 5
                arr[ctr2][0] = temp; // 2 4, 7 3, 1 5
                temp = arr[ctr][1]; //2 4, 7 3, 1 5
                arr[ctr][1] = arr[ctr2][1]; // 2 3,, 7 4, 1 5
                arr[ctr2][1] = temp;
            }
            ctr2++;
        }
        ctr++;
    }
    ctr=0;
}
 
