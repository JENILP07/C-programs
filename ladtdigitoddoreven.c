#include<stdio.h>
void main(){
    int a,b;
    printf("Input:");
    scanf("%d",&a);
    b=a%10;
     if(b%2==0){
        printf("Last Digit is Even");
    }
    else{
        printf("Ladt Digit is Odd");
    }
}