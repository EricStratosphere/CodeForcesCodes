#include <stdio.h>
int main()
{
    int limit, ctr = 0, exit, enter, finval = 0, temp = 0;
    scanf("%d", &limit);
    while (ctr < limit)
    {
        scanf("%d", &exit);
        temp = temp - exit;;
        scanf("%d", &enter);
        temp = enter + temp;
        if (temp > finval)
        {
            finval = temp;
        }
        ctr++;
    }
    printf("%d", finval);
    return 0;
}
