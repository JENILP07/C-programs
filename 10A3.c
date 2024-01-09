//Find whether the given number is prime or not.
#include <stdio.h>
int main(){
    int n,temp=0;
    printf("Enter a number:");
    scanf("%d", &n);
    for (int i = 2; i < n; i++) {
        if(n%i==0){
            temp=1;
        }
    }
    if(temp==0){
        printf("Prime number");
    }
    else{
        printf("Not prime number");
    }
    return 0;
}