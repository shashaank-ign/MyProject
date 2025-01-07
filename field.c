#include <stdio.h>
#include <string.h>

// Define the struct with bit fields for age and grade
struct student {
    char name[20];          // Regular character array for name
    unsigned int age : 6;   // 6-bit unsigned int for age
    unsigned int grade : 4; // 4-bit unsigned int for grade (to store grades 0-15)
};

int main() {
    // Initialize an array of 3 student structs
    struct student students[3] = {
        {"Abhi", 10, 9},
        {"Lalith", 22, 12},
        {"Surya", 19, 10}
    };

    // Print each student's details
    for (int i = 0; i < 3; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %u\n", students[i].age);
        printf("Grade: %u\n", students[i].grade);
        printf("\n");
    }

    // Print the size of the struct
    printf("Size of struct student: %lu bytes\n", sizeof(struct student));

    return 0;
}
