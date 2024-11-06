#include <stdio.h>
#include <string.h>
int main()
{
    char teams[100];
    scanf("%s", teams);
    int ctr = 0, lim = strlen(teams), ctrzero = 0, ctrone = 0;
    while (ctr < lim)
    {
        if (teams[ctr] == '0')
        {
            ctrone = 0;
            ctrzero++;
        }
        else if (teams[ctr] == '1')
        {
            ctrzero = 0;
            ctrone++;
        }
        if (ctrzero >= 7 || ctrone >= 7)
        {
            printf("YES");
            return 0;
        }
        ctr++;
    }
    printf("NO");
    return 0;
}
