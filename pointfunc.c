#include <stdio.h>
#include <string.h>

// Define the student struct
typedef struct {
    char name[20];
    int score;
    int (*compare)(struct student, struct student);
} student;


int compare_ascending(student a, student b);
int compare_descending(student a, student b);
void sort_students(student arr[], int size, int (*compare)(student, student));
void print_students(student arr[], int size);

int main() {
    // Initialize an array of students
    student students[] = {
        {"Abhijith", 89, compare_ascending},
        {"jithul", 95, compare_ascending},
        {"joseph", 97, compare_ascending}
    };
    int size = sizeof(students) / sizeof(students[0]);

    printf("Original order:\n");
    print_students(students, size);

    // Sort students in ascending order
    printf("\nSorted in ascending order:\n");
    sort_students(students, size, compare_ascending);
    print_students(students, size);

    // Sort students in descending order
    printf("\nSorted in descending order:\n");
    sort_students(students, size, compare_descending);
    print_students(students, size);

    return 0;
}

int compare_ascending(student a, student b) {
    return a.score > b.score;
}

int compare_descending(student a, student b) {
    return a.score < b.score;
}

// Function to sort the array of students using the given comparison function
void sort_students(student arr[], int size, int (*compare)(student, student)) {
    student temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (compare(arr[i], arr[j])) {
                // Swap students if they are out of order
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// Function to print the students' names and scores
void print_students(student arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Name: %s, Score: %d\n", arr[i].name, arr[i].score);
    }
}