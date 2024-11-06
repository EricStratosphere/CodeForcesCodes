#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char* sequence = (char*) malloc(sizeof(char) * 10000);
    scanf("%s", sequence);
    int i = 0;
    while(i < strlen(sequence)){
        if(sequence[i] == '.'){
            printf("0");
            i++;
        }
        else if(sequence[i] == '-'){
            if(sequence[i+1] == '.')
                printf("1");
            else
                printf("2");
            i+=2;
        }
    }
}
