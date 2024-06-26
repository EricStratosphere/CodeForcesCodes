#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char word[1000];
    scanf("%s", word);
    int ctr = 0;
    while (ctr < strlen(word))
    {
        if (ctr == 0)
        {
            printf("%c", toupper(word[ctr]));
            ctr++;
            continue;
        }
        printf("%c", word[ctr]);
        ctr++;
    }
 
}
