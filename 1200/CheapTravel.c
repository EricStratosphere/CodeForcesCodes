#include <stdio.h>
int main()
{
    int n, m, a, b;
    scanf("%d%d%d%d", &n, &m, &a, &b);
    printf("%d", ( a <= b ?
                            m > n ?
                                   n * a < b ?
                                    a
                                :
                                    b
                            :
                                n * a < b * (n/m) + a * (n%m) ?
                                    n * a
                                :
                                    b * (n/m) + a * (n%m)
                  :
                      (n%m == 0 ?
                            b * (n/m)
                       :
                           (b * (n/m)) + b ) ));
}
