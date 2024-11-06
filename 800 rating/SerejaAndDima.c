#include <stdio.h>
 
int main()
{
    int sereja = 0, dima = 0;
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int p1 = 0, p2 = n-1;
    int ctr = 0;
    while(p1 != p2){
        if(ctr % 2 == 0){
            if(arr[p2] >= arr[p1]){
                sereja+=arr[p2];
                p2--;
            }
            else{
                sereja+=arr[p1];
                p1++;
            }
        }
        else{
            if(arr[p2] >= arr[p1]){
                dima+=arr[p2];
                p2--;
            }
            else{
                dima+=arr[p1];
                p1++;
            }
        }
        ctr++;
    }
     if(ctr % 2 == 0){
            if(arr[p2] >= arr[p1]){
                sereja+=arr[p2];
                p2--;
            }
            else{
                sereja+=arr[p1];
                p1++;
            }
        }
        else{
            if(arr[p2] >= arr[p1]){
                dima+=arr[p2];
                p2--;
            }
            else{
                dima+=arr[p1];
                p1++;
            }
        }
        ctr++;
    printf("%d %d", sereja, dima);
}
