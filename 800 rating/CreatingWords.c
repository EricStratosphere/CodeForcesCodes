#include <stdio.h>
#include <stdlib.h>
int main()
{
    int words;
    scanf("%d", &words);
    for(int i = 0; i < words; i++){
        char* word1 = (char*) malloc(3);
        char* word2 = (char*) malloc(3);
        scanf("%s%s", word1, word2);
        char temp = *word1;
        *word1 = *word2;
        *word2 = temp;
        printf("%s %s\n", word1, word2);
    }
}
