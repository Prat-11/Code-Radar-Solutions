#include <stdio.h>

int main() {
    unsigned pratham,a;
    scanf("%u",&pratham,a);
    while(pratham!=0){
        a++;
        pratham=pratham>>1;
    }
    printf("%u",32-a);
    return 0;
}