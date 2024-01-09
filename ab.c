#include <stdio.h>

void decimalToRoman(int num) {
    int decimalValues[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    const char *romanSymbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    for (int i = 0; num > 0; ++i) {
        while (num >= decimalValues[i]) {
            printf("%s", romanSymbols[i]);
            num -= decimalValues[i];
        }
    }
}

int main() {
    int num;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    printf("Roman numeral equivalent: ");
    decimalToRoman(num);

    return 0;
}
