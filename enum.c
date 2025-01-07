#include <stdio.h>

// Enum definition for operations
typedef enum {
    ADD,
    SUBTRACT,
    MULTIPLY,
    DIVIDE
} operation;

int add(int a, int b);

int subtract(int a, int b);

int multiply(int a, int b);

int divide(int a, int b);


// Function to calculate the result based on the operation
int calculate(operation op, int x, int y);


int main() {
    int x ,y;
    
    printf("Enter the two integer:\n");
    scanf("%d %d" ,&x,&y);
    printf("Addition of %d and %d: %d\n", x, y, calculate(ADD, x, y));
    printf("Subtraction of %d and %d: %d\n", x, y, calculate(SUBTRACT, x, y));
    printf("Multiplication of %d and %d: %d\n", x, y, calculate(MULTIPLY, x, y));
    printf("Division of %d and %d: %d\n", x, y, calculate(DIVIDE, x, y));

    return 0;
}

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Division by zero\n");
        return 0;
    }
}

// Array of function pointers, indexed by the 'operation' enum
int (*operations[])(int, int) = {add, subtract, multiply, divide};

// Function to calculate the result
int calculate(operation op, int x, int y) {
    if (op >= ADD && op <= DIVIDE) { // Check if op is within valid range
        return operations[op](x, y);
    } else {
        printf("Invalid operation\n");
        return 0; // Return 0 for invalid operation
    }
}

