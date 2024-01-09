//Check whether the given number is palindrome or not.
#include <stdio.h>
int main(){
    int n,rem,temp=0,sum=0;
    printf("Enter a number:");
    scanf("%d", &n);
    temp=n;
    while(n!=0){
         rem=n%10;
         sum=sum*10+rem;
          n/=10;
          }
         
    if(temp == sum){
        printf("Num is a palindrome");
    }
    else{
        printf("Num is not a palindrome");
    }
    return 0;

}