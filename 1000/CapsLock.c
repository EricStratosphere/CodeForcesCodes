#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() 
{
    int ctr=1, num, num2;
    char word[100];
    scanf("%s", word);
    int lim = strlen(word);
    while (ctr < lim)
    {
        num = (int) word[0];
        num2 = (int) word[ctr];
        if(num > 96 && num2 < 97 || num < 97 && num2 < 97) 
        {
            ctr++;
            continue;
        }    
        else
        {
            printf("%s", word);
            return 0;
        }
        ctr++;
    }
    char new[100];
    if(isupper(word[0])) 
        new [0] = tolower(word[0]);
    else
        new [0] = toupper(word[0]);    
    printf("%c", new[0]);
    ctr=1;
    while (ctr<lim) 
    {
        new[ctr] = tolower(word[ctr]);
        printf("%c", new[ctr]);
        ctr++;
    }
    return 0;
}
