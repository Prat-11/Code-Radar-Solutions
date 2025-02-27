#include <stdio.h>
int main(){
    int a,j;
    scanf("%d",&a);
    for(int i=1;i<=a;i++);
    {
        for(j=i;j<=a;j++);
        {
            printf("%d",j);
        }
        printf("\n");
    }

}