#include <stdio.h>

int main(){
    int p, q, r;
    scanf("%d %d %d", &p, &q, &r);
    if (p > q && p > r)
    printf("%d",q);
    else if (q > p && q > r)
    printf("%d",q);
    else
    printf("%d",r);
    return 0;
}