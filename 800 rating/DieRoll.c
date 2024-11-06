#include <stdio.h>
int main()
{
    int y, w, denominator = 6;
    scanf("%d%d", &y, &w);
    int larger;
    if(y >= w){
        larger = y;
    }
    else if(w > y){
        larger = w;
    }
 
    if(larger == 6){
        printf("1/6");
        return 0;
    }
    else if(larger == 1){
        printf("1/1");
        return 0;
    }
    int numerator = (6 - larger) + 1;
    int temp = numerator%denominator;
    int temp2 = numerator;
    int temp3 = denominator;
    int temp4;
    while(temp > 0){
        temp4 = temp3;
        temp3 = temp;
        temp2 = temp4;
        temp = temp2%temp3;
    }
    denominator = denominator/temp3;
    numerator = numerator/temp3;
    printf("%d/%d", numerator, denominator);
}
