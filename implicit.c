//Write a program that takes two integers as input and calculates their average as a floating-point number. Use implicit typecasting to convert the integers to floats before performing the arithmetic operation. Print the result with two decimal places.//

#include <stdio.h>

float calculate(int x, int y);

int main() {
    int x, y;
    float avg;        

printf("Enter two numbers from the user:\n");
scanf("%d %d", &x, &y);

    avg = calculate(x, y);   // Call the calculate function
    printf("Avg: %.2f\n", avg);  // Print the result with 2 decimal places
    return 0;
}

float calculate(int x, int y) {
    return (x + y) / 2.0;  // Implicit typecasting happens here
}



/* Function definition
float calculate(int x, int y) {
    // Explicitly cast the sum to float
    return ((float)(x + y)) / 2;
}*/

