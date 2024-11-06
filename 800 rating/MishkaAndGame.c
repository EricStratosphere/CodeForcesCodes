#include <stdio.h>
 
int main()
{
    int rounds;
    scanf("%d", &rounds);
    int mCounter = 0, cCounter = 0;
    for(int i = 0; i < rounds; i++){
        int mishka, chris;
        scanf("%d%d", &mishka, &chris);
        if(mishka > chris)
            mCounter++;
        else if(chris > mishka)
            cCounter++;
        else{
            mCounter++;
            cCounter++;
        }
    }
    if(mCounter > cCounter)
        printf("Mishka");
    else if(cCounter > mCounter)
        printf("Chris");
    else
        printf("Friendship is magic!^^");
}
