#include <stdio.h>

// Define the structure for a book
struct Book {
    char title[100];
    char author[100];
    char publication[100];
    float price;
};

int main() {
    struct Book books[3]; // Create an array of 3 book structures to store data for 3 books

    // Read data for 3 books
    for (int i = 0; i < 3; i++) {
        printf("Enter information for Book %d:\n", i + 1);
        printf("Title: ");
        scanf("%s", books[i].title);
        printf("Author: ");
        scanf("%s", books[i].author);
        printf("Publication: ");
        scanf("%s", books[i].publication);
        printf("Price: ");
        scanf("%f", &books[i].price);
    }

    // Display the information for each book
    printf("\nBook Information:\n");
    for (int i = 0; i < 3; i++) {
        printf("Book %d:\n", i + 1);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Publication: %s\n", books[i].publication);
        printf("Price: $%.2f\n", books[i].price);
        printf("\n");
    }

    return 0;
}
