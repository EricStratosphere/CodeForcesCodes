#include <stdio.h>
int main() 
{
    int limit, ctr=0;
   // printf("Enter number of friends: ");
    scanf("%d", &limit);
    int friends[limit];
    int finalfriends[limit];
    while (ctr<limit) 
    {
        //printf("Enter friend [%d]: ", ctr+1);
        scanf("%d", &friends[ctr]);
        ctr++;
    }
    ctr=0;
    while (ctr<limit)
    {
        int temp=ctr+1;
        int ctr2=0;
        while(friends[ctr2] != temp) 
        {
            ctr2++;
        }
        finalfriends[ctr] = ctr2+1;
        ctr++;
    }
    ctr=0;
    while(ctr<limit) 
    {
        printf("%d ", finalfriends[ctr]);
        ctr++;
    }
}
