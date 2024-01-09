/**/
#include<stdio.h>
#include"operation.c"
int main(){
    int a,b;
        printf("Enter Values of A and B\n");
        scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("%d %d\n",a,b);
    return 0;
}
