/*Calculate sum of two numbers using pointer.*/
#include <stdio.h>
int main(){
    int a,b;
    printf("Enter A and B :\n ");
    scanf("%d %d",&a,&b);
    int *A,*B;
    A=&a,B=&b;
    printf("%d",*A+*B);
    return 0;
}