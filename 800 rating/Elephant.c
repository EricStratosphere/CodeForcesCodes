#include <stdio.h>
int main()
{
    int num, position, steps;
    scanf("%d", &position);
    steps = position/5;
    if (steps >=0)
    {
        if (position%5 > 0)
        {
        steps++;
        }
        printf("%d", steps);
    }
    return 0;
}
