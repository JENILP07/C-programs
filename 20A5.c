#include <stdio.h>

// Define the structure for a student
struct Student {
    char name[50];
    float percentage;
    int age;
};

int main() {
    struct Student students[5]; // Create an array of 5 student structures to store data for 5 students

    // Read data for 5 students
    for (int i = 0; i < 5; i++) {
        printf("Enter information for Student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Percentage: ");
        scanf("%f", &students[i].percentage);
        printf("Age: ");
        scanf("%d", &students[i].age);
    }

    // Display the information for each student
    printf("\nStudent Information:\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Percentage: %.2f\n", students[i].percentage);
        printf("Age: %d\n", students[i].age);
        printf("\n");
    }

    return 0;
}
