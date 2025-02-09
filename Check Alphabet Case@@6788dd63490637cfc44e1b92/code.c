#include <stdio.h>

int main(){
    char p;
    scanf("%c", &p);
    if (p >= 'A' && p<= 'Z')
    printf("Uppercase");
    else if(p >= 'a'&& p<= 'z')
    printf("Lowercase");
    else
    printf("Not an alphabet");
    return 0;
}