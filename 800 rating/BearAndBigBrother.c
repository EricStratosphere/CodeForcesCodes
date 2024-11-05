#include <stdio.h>
int main()
{
    int Limak, Bob, ctr=0;
    scanf("%d", &Limak);
    scanf("%d", &Bob);
    while (Limak <= Bob)
    {
        Limak*=3;
        Bob*=2;
        ctr++;
    }
    printf("\n%d", ctr);
}
