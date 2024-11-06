#include <stdio.h>
#include <math.h>
int main() 
{
    long long int a;
    scanf("%d", &a);
    if(a>1) 
        printf("25");
    else if(a==1) 
        printf("05");
    else
        printf("01");
}
