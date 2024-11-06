#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int n;
    scanf("%d", &n);
    //printf("%d\n", n);
    for(int i = 0; i < n; i++)
    {
        //printf("%d\n", i);
        char abc[100];
        scanf(" %s", abc);
        if(abc[0] == 'a' || abc[1] == 'b' || abc[2] == 'c')
            printf("YES\n");
        else
            printf("NO\n");
    }
}
