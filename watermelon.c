#include <stdio.h>
int main()
{
    int num, quotient;
    scanf("%d", &num);
    quotient = num/2;
    if (num%2 == 0 && num!=2)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
