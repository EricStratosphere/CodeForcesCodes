#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char word[200];
    scanf("%s", &word);
    int ctr = 0;
    while (ctr < strlen(word))
    {
        if (word[ctr] == 'y' || word[ctr] == 'Y' || word[ctr] == 'a' || word[ctr] == 'A' || word[ctr] == 'e' || word[ctr] == 'E' || word[ctr] == 'i' || word[ctr] == 'I' || word[ctr] == 'o' || word[ctr] == 'O' || word[ctr] == 'u' || word[ctr] == 'U')
        {
            ctr++;
            continue;
        }
        printf(".%c", tolower(word[ctr]));
        ctr++;
    }
    return 0;
}
