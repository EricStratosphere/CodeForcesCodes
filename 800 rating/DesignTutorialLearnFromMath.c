#include <stdio.h>
#include <stdbool.h>
bool isPrime(int num){
    for(int i = 2; i < num; i++){
        if(num%i == 0)
            return false;
    }
    return true;
}
int main()
{
    int num;
    scanf("%d", &num);
    int num1 = num/2;
    int num2 = num - num1;
    if(num1 == num2){
        if(isPrime(num1) && isPrime(num2))
            printf("%d %d", num1-1, num2 + 1);
        else
            printf("%d %d", num1, num2);
    }
    else{
        while(isPrime(num1) || isPrime(num2)){
            if(num1 > num2){
                num1++;
                num2--;
            }
            else{
                num1--;
                num2++;}
        }
        printf("%d %d", num1, num2);
    }
}
