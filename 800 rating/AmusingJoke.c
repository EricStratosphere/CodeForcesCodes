#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
void concatenate(char [], char [],char []);
int counter (char[], char[]);
int main()
{
        char a[100], b[100], c[100];
        scanf("%s", &a);
        scanf("%s", &b);
        scanf("%s", &c);
        concatenate(a, b, c);
}
 
void concatenate(char a[],char b[],char c[])
{
        int size = strlen(a) + strlen(b), ctr = 0;
        char d[size];
        while (ctr < strlen(a))
        {
            d[ctr] = a[ctr];
            ctr++;
        }
        int ctr2 = 0;
        while(ctr2 < strlen(b))
        {
            d[ctr] = b[ctr2];
            ctr2++;
            ctr++;
        }
        counter(d, c);
}
 
int counter (char d[], char c[])
{
    int s = strlen(c);
    /*printf("%s \n", d);
    printf("%s \n", c);*/
    for(int ctr=0;ctr<s;ctr++)
    {
        int letterctr=0;
        int letterctr2=0;
        for (int ctr2=0;ctr2<s;ctr2++)
        {
            if(d[ctr2] == d[ctr])
            {
                letterctr++;
            }
            if(c[ctr2] == d[ctr])
            {
                letterctr2++;
            }
        }
        if (letterctr != letterctr2)
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
}
