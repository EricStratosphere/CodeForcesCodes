#include <stdio.h>
int main()
{
   char name[100];
   scanf("%s", name);
   int i = 0, unique = 0, flag = 0;
   while(name[i] != '\0'){
        int j = 0;
        flag = 0;
        while(j < i){
            if(name[j] == name[i]){
                flag = 1;
            }
            j++;
        }
        if(!flag)
            unique++;
        i++;
   }
   if(unique % 2 == 0)
        printf("CHAT WITH HER!");
   else
        printf("IGNORE HIM!");
}
