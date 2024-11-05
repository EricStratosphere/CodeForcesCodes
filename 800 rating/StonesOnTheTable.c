#include <stdio.h>
#include <string.h>
int main()
{
    int lim, ctr = 0, neighbours = 0;
    scanf("%d", &lim);
    char table[lim];
    scanf("%s", table);
    while (ctr < lim)
    {
        if (table[ctr] == table[ctr + 1])
        {
            neighbours++;
        }
        if (ctr + 1 == lim-1)
        {
            break;
        }
        ctr++;
    }
    printf("%d", neighbours);
    return 0;
}
