#include <stdlib.h>
 
int main() 
{
    int row;
    scanf("%d", &row);
    int** arr = (int**) malloc(sizeof(int*)*row);
    for(int i = 0; i < row; i++){
        int column;
        scanf("%d", &column);
        *(arr+i) = (int*) malloc(sizeof(int) * column);
        int oddOneOut;
        for(int j = 0; j < column; j++){
            scanf("%d", ((*(arr + i)) + j));
            if(j > 1){
                if (*(*(arr+i)+j) == *(*(arr+i)+j-1) && *(*(arr+i)+j-2) == *(*(arr+i)+j-1))
                    continue;
                else if (*(*(arr+i)+j) == *(*(arr+i)+j-1)) {
                    oddOneOut = j-2;
                }
                else if(*(*(arr+i)+j) == *(*(arr+i)+j-2)){
                    oddOneOut = j-1;
                }
                else if(*(*(arr+i)+j-1) == *(*(arr+i)+j-2)) 
                    oddOneOut = j;
            }
        }
        printf("%d\n", oddOneOut+1);
    }
 
}
