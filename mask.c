#include <stdio.h>

// Function to print the binary representation of an 8-bit unsigned char
void printBinary(unsigned char n);

int main() {
    unsigned char input, andMask, orMask;

    // Step 1: Get an 8-bit unsigned char input from the user
    printf("Enter an 8-bit unsigned integer (0-255): ");
    scanf("%hhu", &input);

    // Print the binary representation of the input
    printf("Binary representation of input: ");
    printBinary(input);

    // Step 2: Get the AND mask and apply the bitwise AND operation
    printf("Enter an 8-bit AND mask (0-255): ");
    scanf("%hhu", &andMask);

    unsigned char andResult = input & andMask;
    printf("Result after AND operation:\n");
    printf("Binary: ");
    printBinary(andResult);
    printf("Decimal: %u\n", andResult);

    // Step 3: Get the OR mask and apply the bitwise OR operation
    printf("Enter an 8-bit OR mask (0-255): ");
    scanf("%hhu", &orMask);

    unsigned char orResult = input | orMask;
    printf("Result after OR operation:\n");
    printf("Binary: ");
    printBinary(orResult);
    printf("Decimal: %u\n", orResult);

    return 0;
}

// Function to print the binary representation of an 8-bit unsigned char
void printBinary(unsigned char n) {
    for (int i = 7; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
    }
    printf("\n");
}