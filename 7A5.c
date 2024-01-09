#include<stdio.h>
int main(){
    int a;
    printf("enter value:\n");
    scanf("%d",&a);
    a%2==0?printf("Even"):printf("Odd");
    return 0;
}