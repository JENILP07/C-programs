//Find whether the given number is prime or not using flag.
#include <stdio.h>
int main(){
    int n,flag=0;
    printf("Enter a number:");
    scanf("%d", &n);
    int i = 2;
     while(i<n){
            if(n%i==0){
            flag=1;
            i++;
        }
    }
    if(flag==0){
        printf("Prime number");
    }
    else{
        printf("Not prime number");
    }
    return 0;
}