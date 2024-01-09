#include <stdio.h>

int main() {
    int num, factorial;
    printf("Enter a number: ");
    scanf("%d", &num);
    factorial = 1;
    while (num > 1) {
        factorial *= num;
        num--;
    }

    printf("Factorial: %d\n", factorial);
    return 0;
}
