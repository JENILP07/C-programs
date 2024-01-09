/*Call by Value & Call by Refrence*/
#include <stdio.h>
    void swap(int a,int b),swap1(int *a,int *b);
    void main(){
        int a,b;
        printf("Enter Values of A and B\n");
        scanf("%d %d",&a,&b);
        printf("For Call by Value\n");
        printf("Before %d %d\n",a,b);
        swap(a,b);
        printf("After %d %d\n",a,b);
        printf("For Call By Reference\n");
        printf("Before %d %d\n",a,b);
        swap1(&a,&b);
        printf("After %d %d\n",a,b);
    }
    void swap(int a,int b){
        int temp=a;
        a=b;
        b=temp;
    }
    void swap1(int *a,int *b){
        int temp=*a;
        *a=*b;
        *b=temp;
        }