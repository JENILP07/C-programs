//Print all ASCII character with their values.
#include <stdio.h>

int main() {
    printf("ASCII characters and their values:\n");
    for (int i = 0; i <= 127; i++) {
        printf("Character: %c\tValue: %d\n", i, i);
    }
    return 0;
}
