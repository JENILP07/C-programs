/*Swap value of two numbers using pointer*/
#include <stdio.h>
int main(){
    int a,b,temp;
    printf("Enter A and B :\n ");
    scanf("%d %d",&a,&b);
    int *A,*B;
    A=&a,B=&b;
    temp=*A;
    *A=*B;
    *B=temp;
    printf("A = %d B = %d",*A,*B);
    return 0;
}