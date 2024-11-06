#include<stdio.h>
#include<string.h>
int main() 
{
    int ctr=0;
    char word[200];
    scanf("%s", word);
    char a = 67;
    int lim = strlen(word);
    while (ctr<lim)
    {
        if(word[ctr] == 'H' ||
        word[ctr]== 'Q' ||
        word[ctr] == '9' || 
        word[ctr-1] == 'Q' &&
        word[ctr] == '+') 
        {
            printf("YES");
            return 0;
        }
        ctr++;
    }
    printf("NO");
    return 0;
}
