#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char* getRootString(char*);
int j;
int main()
{
    int strings;
    scanf("%d", &strings);
    for(int i = 0; i < strings; i++){
        char* b = (char*) malloc(sizeof(char) * 1000);
        scanf("%s", b);
        char* a = getRootString(b);
        for(int i = 0; i < j; i++){
            printf("%c", a[i]);
        }
        printf("\n");
    }
}
 
char* getRootString(char* b)
{
 
    //abbaa
    j = 2;
    for(int i = 2; i < strlen(b); i+=2){
        j++;
    }
    char* a = (char*) malloc(sizeof(char) * (j-1));
    a[0] = b[0];
    a[1] = b[1];
    j = 2;
    for(int i = 2; i < strlen(b); i+=2){
        a[j] = b[i+1];
        j++;
    }
    return a;
}
