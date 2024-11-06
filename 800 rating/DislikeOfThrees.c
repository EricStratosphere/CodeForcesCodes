#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    for(int j = 0; j < num; j++){
        int num2;
        scanf("%d", &num2);
        int i = 1;
        int finNum = 1;
        while(i != num2){
            finNum++;
            while(finNum % 3 == 0 || finNum % 10 == 3)
                finNum++;
            i++;
        }
        if(finNum % 3 == 0 || finNum % 10 == 3)
            finNum++;
        printf("%d\n", finNum);
    }
}
