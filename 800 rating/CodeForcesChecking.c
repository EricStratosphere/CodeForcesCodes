#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char sample[] = "codeforces";
    int letters;
    scanf("%d", &letters);
    for(int i = 0; i < letters; i++){
        char* c = (char*) malloc(1);
        scanf(" %c", c);
        int j;
        for(j = 0; j < strlen(sample); j++){
            if(sample[j] == *c){
                printf("YES\n");
                break;}
        }
        if(sample[j] == *c)
            continue;
        printf("NO\n");
    }
}
