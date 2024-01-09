//Count frequency of digits in an integer.
#include <stdio.h>
int main(){
    int n,count=0;
    printf("Enter a number:");
    scanf("%d", &n);
    while(n!=0){
         int digit = n % 10;
         n = n / 10;
         count++;
         }
        printf("frequency of digits : %d\n", count);
    return 0;
}