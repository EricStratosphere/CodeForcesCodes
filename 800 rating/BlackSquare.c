#include <stdio.h>
#include <stdlib.h>
int main()
{
    void* reference = (int*) malloc(sizeof(int) * 4);
    scanf("%d%d%d%d", ((int*)reference), ((int*)reference + 1), ((int*)reference + 2), ((int*)reference + 3));
    void* string = (char*) malloc(sizeof(char) * 100000);
    scanf("%s", ((char*)string));
    int sum = 0;
    for(int i = 0; *((char*)string + i) != '\0'; i++){
        sum += *((int*) reference + ((*((char*)string + i)) - '1'));
    }
    printf("%d", sum);
}
