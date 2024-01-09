/*Find maximum and minimum between two numbers using function*/
#include<stdio.h>
int comp(int a, int b);
int main(){
     int a,b;
    printf("Enter Value of A and B\n");
    scanf("%d %d",&a,&b);
    int result = comp(a,b);
    if(result == 1){
        printf("Value of A is greater than B");
    }
    else{
        printf("Value of B is greater than A");
    }
    return 0;
}
int comp(int a, int b){
    if(a < b){
        return 0;
    }
    else{
        return 1;
    }
}