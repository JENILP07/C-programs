#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter value");
    scanf("%d %d %d",&a,&b,&c);
    a>b? a>c?printf("a"):printf("c"):b>c?printf("b"):printf("c");
 }