//Check whether the given number is Armstrong or not

#include <stdio.h>
#include <math.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int sum = 0;
    int temp = n;
    while(temp!= 0){
        int rem = temp % 10;
        sum += pow(rem, 3);
        temp /= 10;
    }
    if(sum == n)
        printf("%d is an Armstrong number", n);
    else
        printf("%d is not an Armstrong number", n);
    return 0;
}