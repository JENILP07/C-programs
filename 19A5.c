#include <stdio.h>
#include <string.h>

void replaceChar(char *str, char target, char replacement) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == target) {
            str[i] = replacement;
        }
    }
}

int main() {
    char str[] = "Hello, World!";
    char target = 'o';
    char replacement = '*';

    printf("Original string: %s\n", str);
    
    replaceChar(str, target, replacement);

    printf("Modified string: %s\n", str);

    return 0;
}
