#include <stdio.h>
int main() 
{
    char word[200];
    int ctr=0;
    scanf("%s", word);
    while(word[ctr] != '\0') 
    {
        if(word[ctr]=='W' && word[ctr+1]=='U' && word[ctr+2]=='B') 
        {
            ctr+=3;
            printf(" ");
            continue;
        }    
        printf("%c", word[ctr]);
        ctr++;
    }
 
 
 
 
}
