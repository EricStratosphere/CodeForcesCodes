#include <stdio.h>
int main()
{
    int lim;
    scanf("%d", &lim);
    for(int i = 0; i < lim; i++){
        int a, b, temp;
        scanf("%d%d",&a, &b);
        if(a > b){
            temp = a;
            a = b;
            b = temp;
        }
        printf("%d %d\n", a, b);
    }
}
