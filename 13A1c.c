#include <stdio.h>

int main() {
    int i, j, space;

    for (i = 1; i <= 5; i++) {
        // Print spaces
        for (space = 1; space <= 5 - i; space++) {
            printf(" ");
        }
            // Print *
            for (j = 1; j <= 2 * i - 1; j++) {
               printf("*");
           }

        printf("\n");
    }

    return 0;
}
