#include <stdio.h>

int main() {
    int PRATHAM, count=0;
    scanf("%d",&PRATHAM);
    while((PRATHAM&1)==0)
    {PRATHAM=PRATHAM>>1;
    count++;
}
printf("%d",count);
return 0;
}