#include <stdio.h>


void printBinary(int n);

int main() {
    int number;
    int pos1, pos2;

    
    printf("Enter a signed integer: ");
    scanf("%d", &number);

    printf("Original binary representation: ");
    printBinary(number);

    
    printf("Enter two positions to set bits (0 to 31): ");
    scanf("%d %d", &pos1, &pos2);

    
    number |= (1 << pos1);
    number |= (1 << pos2);

    printf("Binary representation after setting bits: ");
    printBinary(number);
    printf("Decimal value after setting bits: %d\n", number);

    
    printf("Enter two positions to clear bits (0 to 31): ");
    scanf("%d %d", &pos1, &pos2);

    
    number &= ~(1 << pos1);
    number &= ~(1 << pos2);

    printf("Final binary representation after clearing bits: ");
    printBinary(number);
    printf("Final decimal value after clearing bits: %d\n", number);

    return 0;
}

void printBinary(int n) {
    for (int i = 31; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
    }
    printf("\n");
}