#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    char target = 'W';

    // Use strchr() to find the character 'W' in the string
    char *result = strchr(str, target);

    if (result != NULL) {
        printf("Character '%c' found at index %ld\n", target, result - str);
    } else {
        printf("Character '%c' not found in the string.\n", target);
    }

    return 0;
}
