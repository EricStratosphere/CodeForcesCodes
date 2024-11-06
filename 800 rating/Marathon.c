#include <stdio.h>
#include <stdlib.h>
 
int main() 
{
    int size;
    scanf("%d", &size);
    for(int i = 0; i < size; i++){
        int *arr = (int*) malloc(sizeof(int)*4);
        int ctr = 0;
        for(int j = 0; j < 4; j++){
            scanf("%d", arr + j);
            if (j > 0 && *(arr + j) > *(arr + 0))
                ctr+=1;
        }    
        printf("\n%d", ctr);
    }
}
