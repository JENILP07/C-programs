//Find the sum of 1 + (1+2) + (1+2+3) + (1+2+3+4) + …+ (1+2+3+4+…. +n).
#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int sum = 0; 

    for (int i = 1; i <= n; i++) {
        int sum1 = 0; 
        for (int j = 1; j <= i; j++) {
            sum1 += j; 
        }
        sum += sum1; 
    }

    printf("The sum of the series is: %d\n", sum);

    return 0;
}
