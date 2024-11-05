#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int main()
{
    char word[200];
    int ctr = 0, uppercase = 0, lowercase = 0;
    scanf("%s", word);
    int stringlength = strlen(word);
    int test;
    while (ctr < stringlength)
    {
        test = word[ctr];
        if (test > 90)
        {
            lowercase++;
        }
        else if (test <= 90)
        {
            uppercase++;
        }
        ctr++;
    }
    if (uppercase > lowercase)
    {
        ctr = 0;
        while (ctr < stringlength)
        {
            word[ctr] = toupper(word[ctr]);
            ctr++;
        }
    }
    else
    {
        ctr = 0;
        while (ctr < stringlength)
        {
            word[ctr] = tolower(word[ctr]);
            ctr++;
        }
    }
    printf("%s", word);
}
