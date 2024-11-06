#include <stdio.h>
#include <stdlib.h>
 
void sockCounter(int*, int*);
int main()
{
    int blueSock, redSock;
    scanf("%d", &blueSock);
    scanf("%d", &redSock);
    sockCounter(&blueSock, &redSock);
}
 
void sockCounter(int *blueSock, int *redSock)
{
    if (*blueSock > *redSock)
    {
        printf("%d ", *redSock);
        *blueSock = *blueSock - *redSock;
        printf("%d", *blueSock/2);
    }
    else if (*redSock > *blueSock)
    {
        printf("%d ", *blueSock);
        *redSock = *redSock - *blueSock;
        printf("%d", *redSock/2);
    }
    else
        printf("%d 0", *blueSock, *redSock);
}
