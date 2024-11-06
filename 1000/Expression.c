#include<stdio.h>
int main() 
{
    int a, b, c, d, e;
    scanf("%d", &a);
    scanf("%d", &b);    
    scanf("%d", &c);
    e = a + b * c;
    d = e;
    e = a*(b+c);
    if (e>d) 
    {
        d = e;
    }
    e = a*b*c;
    if (e>d) 
    {
        d = e;
    }
    e = (a+b)*c;
    if (e>d) 
    {
        d = e;
    }
    e = (a*c)+b;
    if (e>d) 
    {
        d = e;
    }
    e = (a*b)+c;
    if (e>d) 
    {
        d = e;
    }
    e = (b*c)+a;
    if (e>d) 
    {
        d = e;
    }
    e = a+b+c;
    if (e>d) 
    {
        d = e;
    }
    printf("%d", d);
    return 0;
}
