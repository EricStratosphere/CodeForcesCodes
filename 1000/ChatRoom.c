#include <stdio.h>
#include <string.h>
int main() 
{
    char sample[10] = "hello", word[200];
    scanf("%s", word);
    int limiter = strlen(word);
    int counter2 = 0;
    for(int counter=0; counter<limiter; counter++) 
    {
        if (word[counter] == sample[counter2]) 
        {
            counter2++;
        }
    }
    if(counter2==5)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }    
}
