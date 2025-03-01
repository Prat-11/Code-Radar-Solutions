#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(int pm=1;pm<=a-i;pm++)
            printf(" ");
    }
    for(int j=1;j<=a;j++){
        printf("%d ",j);
    }
    printf("\n");
}