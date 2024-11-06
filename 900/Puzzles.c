#include <stdio.h>
#include <stdlib.h>
 
void arrange(int [], int);
int main()
{
    int students, puzzles;
    scanf("%d", &students);
    scanf("%d", &puzzles);
    int arr[puzzles];
    int ctr=0;
    while (ctr < puzzles)
    {
        scanf("%d", &arr[ctr]);
        ctr++;
    }
    ctr=0;
    int max;
    int min;
    arrange(arr, puzzles);
    max = arr[0];
    min = arr[0];
    //printf("\n%d, %d", max, min);
    while (ctr<students)
    {
        if (arr[ctr] > max)
        {
            max = arr[ctr];
        }
        if (arr[ctr] < min)
        {
            min = arr[ctr];
        }
        ctr++;
    }
    int temp = max - min;
    ctr=0;
    while (ctr < puzzles)
    {
        int ctr2 = ctr;
        max = arr[ctr];
        min = arr[ctr];
        while(ctr2 < (students+ctr))
        {
            if (arr[ctr2] > max)
            {
                max = arr[ctr2];
            }
            if (arr[ctr2] < min)
            {
                min = arr[ctr2];
            }
            //printf("\n%d, %d", max, min);
            if(ctr2 == puzzles)
            {
                break;
            }
            ctr2++;
        }
        int temp2 = max - min;
        if (temp2 < temp)
        {
            temp = temp2;
        }
        if(ctr2 == puzzles)
            break;
        ctr++;
    }
    printf("\n%d", temp);
}
 
void arrange(int arr[], int limit)
{
    int ctr=0, largest = arr[0];
    for (int ctr2=0; ctr2 < limit; ctr2++)
    {
        int ctr3;
        largest = 0;
        for (ctr3 = ctr2; ctr3 < limit; ctr3++)
        {
            if(arr[ctr3] > largest)
                largest = arr[ctr3];
        }
        //printf("largest: %d\n", largest);
        for (ctr3 = ctr2; ctr3 < limit; ctr3++)
        {
            if(arr[ctr3] == largest)
                break;
        }
        int temp = arr[ctr3];
        arr[ctr3] = arr[ctr2];
        arr[ctr2] = temp;
        //printf("%d ", arr[ctr2]);
    }
}
