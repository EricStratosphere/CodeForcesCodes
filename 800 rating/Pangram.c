#include <stdio.h>
#include <ctype.h>
int main() 
{
    char word[100];
    int ctr=0, limiter;
    scanf("%d", &limiter);
    scanf("%s", word);
    char checker[26] = "abcdefghijklmnopqrstuvwxyz";
    int limiter2=strlen(checker)-1;
    while (ctr<limiter) 
    {
        word[ctr] = tolower(word[ctr]);
        ctr++;
    }
    ctr=0;
    while (ctr<limiter2) 
    {
        int temp = ctr;
        ctr=0;
        while (ctr<limiter)
        {
            if (checker[temp] == word[ctr]) 
            {
                break;
            }
            ctr++;
        }
        if (checker[temp] != word[ctr]) 
        {
            printf("NO");
            return 0;
        }
        ctr = temp;
        ctr++;    
    }
    printf("YES");
    return 0;
}
