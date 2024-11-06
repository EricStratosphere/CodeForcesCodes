#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
int main(int argc, char*argv[]){
    int lim;
    scanf("%d", &lim);
 
    char **str = (char**) malloc((lim*100 * sizeof(char*)));
    //char *str[lim];
    for(int i = 0; i < lim; i++){
        str[i] = (char*) malloc(100 * sizeof(char));
        scanf("%s", str[i]);
    }
    for(int i = 0; i < lim; i++){
        str[i][0] = tolower(str[i][0]);
        str[i][1] = tolower(str[i][1]);
        str[i][2] = tolower(str[i][2]);
        if(str[i][0] == 'y' && str[i][1] == 'e' && str[i][2] == 's')
            printf("YES\n");
        else
            printf("NO\n");
    }
 
}
