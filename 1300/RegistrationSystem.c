#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct linkedList{
    struct linkedList* next;
    char text[33];
    int value;
} list;
 
int main()
{
    int limit;
    scanf("%d", &limit);
    list* link = (list*) calloc(26, sizeof(list));
    for(int i = 0; i < limit; i++)
    {
        list *newL = (list*)calloc(1, sizeof(list));
        scanf("%s", newL->text);
        int index = (newL->text[0] - 'a');
        for(list* temp = link+index; temp != NULL; temp = temp->next)
        {
            if(strcmp(newL->text, temp->text) == 0){
                //if the two strings are equal.
                printf("%s%d\n", newL->text,temp->value);
                temp->value = temp->value + 1;
                break;
            }
            else if(temp->next == NULL){
                temp->next = newL;
                printf("OK\n");
                newL->value = newL->value + 1;
                break;
            }
        }
    }
}
