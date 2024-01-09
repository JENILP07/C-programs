#include <stdio.h>
#include <string.h>

int main() {
    // Using strlen() to find the length of a string
    char str1[] = "Hello,";
    printf("Length of str1: %lu\n", strlen(str1)); // Prints: Length of str1: 6

    // Using strcmp() to compare two strings
    char str2[] = "World!";
    if (strcmp(str1, str2) == 0) {
        printf("str1 and str2 are equal\n");
    } else {
        printf("str1 and str2 are not equal\n");
    }

    // Using strcpy() to copy a string
    char destination[20];
    strcpy(destination, str1);
    printf("Copied string: %s\n", destination); // Prints: Copied string: Hello,

    // Using strcat() to concatenate strings
    strcat(destination, str2);
    printf("Concatenated string: %s\n", destination); // Prints: Concatenated string: Hello,World!

    // Using strrev() to reverse a string
    char str3[] = "abcdef";
    strrev(str3);
    printf("Reversed string: %s\n", str3); // Prints: Reversed string: fedcba

    // Using strlwr() to convert a string to lowercase
    char str4[] = "ConvertMe";
    strlwr(str4);
    printf("Lowercase string: %s\n", str4); // Prints: Lowercase string: convertme

    // Using strupr() to convert a string to uppercase
    char str5[] = "ConvertMe";
    strupr(str5);
    printf("Uppercase string: %s\n", str5); // Prints: Uppercase string: CONVERTME

    return 0;
}
