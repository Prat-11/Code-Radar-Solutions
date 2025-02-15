#include <stdio.h>

int main(){
    int p, q, r;
    scanf("%d %d %d", &p, &q, &r);
    if (p > q && q > r)
    printf("%d",q);
    else if (q > p && p > r);
    printf("%d",q);
    else
    printf("%d",r);
    return 0;
}