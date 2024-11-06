#include <stdio.h>
#include <string.h>
void spellCheck(char[], char*);
int main(){
    char* timur = "Timur";
    int ints;
    scanf("%d", &ints);
    for(int i = 0; i < ints; i++){
        int length;
        scanf("%d", &length);
        char name[length];
        scanf("%s", name);
        spellCheck(name, timur);
    }
}
 
void spellCheck(char name[], char* timur){
    if(strlen(name) != strlen(timur)){
        printf("NO\n");
    }
    else{
        int i;
        for(i = 0; i < strlen(timur); i++){
            int j;
            for(j = 0; j < strlen(name); j++){
                if(name[j] == timur[i]){
                    break;
                }
            }
            if(j != strlen(name) && name[j] == timur[i])
                continue;
            printf("NO\n");
            break;
        }
        if(i == strlen(timur)){
            printf("YES\n");
        }
    }
}
