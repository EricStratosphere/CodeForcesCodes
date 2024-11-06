#include <stdio.h>
int main()
{
    int vector[100][3], counter = 0, counter2, limit, sum;
    scanf("%d", &limit);
    while (counter < limit)
    {
        counter2 = 0;
        while (counter2 < 3)
        {
            scanf("%d", &vector[counter][counter2]);
            counter2++;
        }
        counter++;
    }
    counter = 0;
    counter2 = 0;
    while (counter2 < 3)
    {
        counter = 0;
        while (counter < limit)
        {
            sum = sum + vector[counter][counter2];
            counter++;
        }
        if (sum!=0)
        {
            printf("NO");
            return 0;
        }
        counter2++;
    }
    printf("YES");
}
