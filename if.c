#include<stdio.h>
void main(){
    int a,b;
    char n;
     printf("Enter the operation:");
    scanf("%c",&n);
    printf("Enter Val of a:");
    scanf("%d",&a);
    printf("Enter Val of b:");
    scanf("%d",&b);
    if(n=='-'||n=='+'||n=='/'||n=='*')
    {
        if(n=='+')
        {
        printf("Add=%d",a+b);
        }
    else if(n=='-')
    {
        printf("Sub=%d",a-b);
    }
    else if(n=='/'){
    if(b==0)
    {
    printf("not defined");
        }
        else{
        printf("Divide=%d",a/b);
        }}
    else if(n=='*') 
    {
           printf("Multiply=%d",a*b);
        }
    else
    {
     printf("Incorrect operation");
    }
}}