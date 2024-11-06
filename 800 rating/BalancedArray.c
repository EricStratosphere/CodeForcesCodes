#include<stdio.h>
int main()
{
    int numbers;
    scanf("%d", &numbers);
    for(int i = 0; i < numbers; i++){
        int num;
        scanf("%d", &num);
        if((num/2) % 2 != 0){
            printf("NO\n");
        }
        else{
            printf("YES\n");
            int arr[num];
            int timesSubtracted = 0;
            for(int j = 0; j < num-1; j++){
                if(j < (num/2)){
                    arr[j] = (j+1)*2;
                }
                else{
                    arr[j] = arr[j-(num/2)] - 1;
                    //arr[4] = arr[4 - 4] (arr[0]) (2) - 1 == 1
                    timesSubtracted++;
                }
                printf("%d ", arr[j]);
            }
            arr[num-1] = arr[(num/2)-1] + timesSubtracted;
            printf("%d\n", arr[num-1]);
        }
    }
}
