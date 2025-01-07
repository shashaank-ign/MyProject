#include <stdio.h>

int main() {
    int a, b;

    // Step 1: Take input from the user
    printf("Enter the two integer:\n ");
    scanf("%d %d", &a, &b);

    // Print original values
    printf("Original values:\n");
    printf("a = %d, b = %d\n", a, b);

    // Step 2: Swap values using XOR
    a = a ^ b;  // Step 1: a now holds the XOR of a and b
    b = a ^ b;  // Step 2: b now holds the original value of a
    a = a ^ b;  // Step 3: a now holds the original value of b

    // Print swapped values
    printf("Swapped values:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}

