#include <stdio.h>
#include <stdlib.h>
int main()
{
    char** id;
    int lim;
    scanf("%d", &lim);
    id = (char**) malloc(sizeof(char*) * lim);
    for(int i = 0; i < lim; i++)
    {
        *(id + i) = (char*) malloc(sizeof(char) * 6);
        scanf("%s", *(id + i));
        if ((*(*(id + i)) - '0') + (*(*(id + i) + 1) - '0') + (*(*(id + i) + 2) - '0')
        == (*(*(id + i) + 3) - '0') + (*(*(id + i) + 4) - '0') + (*(*(id + i) + 5) - '0')){
            printf("YES\n");
        }
        else
            printf("NO\n");
 
    }
}
