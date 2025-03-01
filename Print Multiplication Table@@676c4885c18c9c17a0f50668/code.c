#include <stdio.h>    
int main(){
    int rows,cols;
    char a;
    scanf("%d %d %c",&rows,&cols,&a);
    for(int i=1; i<= rows; i++)
    {
        for(int j=1; j<= cols; j++){
            printf("%4c",a);
            a++;
        }
        printf("\n");
    }
return 0;
}