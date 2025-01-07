#include <stdio.h>


union FloatToInt {
    float f;
    unsigned int i;
};

void printBinary(unsigned int n) {
    for (int i = 31; i >= 0; i--) {
        // Print each bit by shifting from the most significant bit to the least
        printf("%d", (n >> i) & 1);
    }
    printf("\n");
}

int main() {
    union FloatToInt number;
    
    printf("Enter a floating-point number: ");
    scanf("%f", &number.f);
    
    printf("Binary representation of %.3f as unsigned int: ", number.f);
    printBinary(number.i);
    
    return 0;
}
