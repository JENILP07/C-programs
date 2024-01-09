#include <stdio.h>
#include <string.h>

// Define the structure for an employee
struct Employee {
    int employeeID;
    char name[50];
    double salary;
};

int main() {
    // Declare and initialize variables of the Employee structure
    struct Employee emp1 = {101, " Darshan ", 50000.00};
    struct Employee emp2 = {102, " Krunal ", 60000.00};

    // Print the employee information
    printf("Employee 1:\n");
    printf("Employee ID: %d\n", emp1.employeeID);
    printf("Name: %s\n", emp1.name);
    printf("Salary: %.2f\n", emp1.salary);

    printf("\nEmployee 2:\n");
    printf("Employee ID: %d\n", emp2.employeeID);
    printf("Name: %s\n", emp2.name);
    printf("Salary: %.2f\n", emp2.salary);

    return 0;
}
