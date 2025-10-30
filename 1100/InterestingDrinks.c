#include <stdio.h>
#include <stdlib.h>
int binarySearch(int*, int, int);
void countingsort(int*, int);
int main()
{
    int stores;
    scanf("%d", &stores);
    int *prices = (int*)malloc (sizeof(int) * stores);
    for(int i = 0; i < stores; i++)
    {
        scanf("%d", prices + i);
    }
    countingsort(prices, stores);
    int days;
    scanf("%d", &days);
    for(int i = 0; i < days; i++){
        int moneyToSpend;
        scanf("%d", &moneyToSpend);
        printf("%d\n", binarySearch(prices, stores, moneyToSpend));
    }
 
}
void countingsort(int* array, int size){
    int largest = array[0];
    for(int i = 1; i < size; i++){
        if(*(array+i) > largest)
            largest = *(array+i);
    }
    largest+=1;
    int* newArr = (int*) malloc(sizeof(int) *largest);
    for(int i = 0; i < largest; i++){
        *(newArr + i) = 0;
    }
    for(int i = 0; i < size; i++){
        *(newArr + *(array+i)) += 1;
    }
    int j = 0;
    for(int i = 0; i < size; i++) {
        while(*(newArr+j) == 0)
            j++;
        *(array + i) = j;
        *(newArr + j) = *(newArr + j) - 1;
    }
}
 
int binarySearch(int* dataSet, int size, int target){
    int low = 0;
    int high = size-1;
    int mid = (low+high)/2;
    if(target < dataSet[0]){
        return 0;
    }
    else if(target >= dataSet[high])
        return size;
    while(1){
        // midpoint is 67 at first so.
        if(mid != low){
            if(dataSet[mid] <= target){
                low = mid;
                mid = (low+high)/2;
                //1. 0 + 9/2 == 4
                //   the array now starts at index 4 (67)
                //   midpoint is now 6 (79)
                //   the set becomes 67, 77, 79, 83, 88, 90
                //2. 4+9/2 == 6
                //  the array now starts at index 6 (79)
                //  midpoint is now 7 (83)
                //  set becomes 79, 83, 88, 90
            }
            else if(dataSet[mid] >= target){
                high = mid;
                mid = (low+high)/2;
                //3. the array now ends at index 7 (83)
                //  midpoint is now 6
                //  set becomes 79, 83
                // mid is now equal to low
            }
        }
        else
            if(dataSet[high] <= target)
                return high+1;
            else if(dataSet[low] <= target)
                return low+1;
    }
}
