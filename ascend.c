#include <stdio.h>


int ascending(int a, int b);
int descending(int a, int b);
void sort_array(int arr[], int size, int (*compare)(int, int));
void print_array(int arr[], int size);


int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    print_array(arr, size);

    // Sort the array in ascending order
    sort_array(arr, size, ascending);
    printf("Array sorted in ascending order: ");
    print_array(arr, size);

    // Sort the array in descending order
    sort_array(arr, size, descending);
    printf("Array sorted in descending order: ");
    print_array(arr, size);

    return 0;
}

int ascending(int a, int b) {
    return a < b;  // Returns true if a is less than b
}

int descending(int a, int b) {
    return a > b;  // Returns true if a is greater than b
}

// Function to sort the array using the comparison criterion provided
void sort_array(int arr[], int size, int (*compare)(int, int)) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (!compare(arr[i], arr[j])) {
                // Swap elements if they are out of order
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// Function to print the array
void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

