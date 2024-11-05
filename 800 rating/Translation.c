#include <stdio.h>
#include <string.h>
int main()
{
    char Berlandish[200], Birlandish[200];
    scanf("%s", Berlandish);
    scanf("%s", Birlandish);
    int Berlim = strlen(Berlandish);
    int ctr = 0;
    int Birlim = Berlim-1;
    while (ctr < Berlim)
    {
        if (Berlandish[ctr] != Birlandish[Birlim])
        {
            printf("NO");
            return 0;
        }
        ctr++;
        Birlim--;
    }
    printf("YES");
    return 0;
