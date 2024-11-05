#include <stdio.h>
int main()
{
    int numberOfPeeps, fenceHeight, heights;
    scanf("%d", &numberOfPeeps);
    scanf("%d", &fenceHeight);
    int ctr = 0, width = 0;
    while (ctr<numberOfPeeps)
    {
        scanf("%d", &heights);
        if (heights > fenceHeight)
        {
            width+=2;
        }
        else
        {
            width++;
        }
        ctr++;
    }
    printf("%d", width);
}
