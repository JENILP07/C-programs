//Print digits of given number
#include <stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    while(n!=0){
         int digit=n%10;
         n=n/10;
         printf("%d\n", digit);
    }
    return 0;
}