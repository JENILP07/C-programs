#include <stdio.h>

// Define the structure for a student
struct Student {
    char name[50];
    float percentage;
    int age;
};

int main() {
    // Declare an array of structures to store data for 5 students
    struct Student students[5];

    // Input data for each student
    printf("Enter details for 5 students:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);

        // Input name
        printf("Enter name: ");
        scanf("%s", students[i].name);

        // Input percentage
        printf("Enter percentage: ");
        scanf("%f", &students[i].percentage);

        // Input age
        printf("Enter age: ");
        scanf("%d", &students[i].age);
    }

    // Display the details of each student
    printf("\nDetails of 5 students:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Percentage: %.2f\n", students[i].percentage);
        printf("Age: %d\n", students[i].age);
    }

    return 0;
}
