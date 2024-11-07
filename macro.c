#include<stdio.h>
      // Write Macro Like Functions for Set Bit, Clear bit and Toggle Bit//
#define SET_BIT(num, post)   ((num) |= (1U << (post)))
#define CLEAR_BIT(num, post) ((num) &= ~(1U << (post)))
#define TOGGLE_BIT(num, post) ((num) ^= (1U << (post)))

void printBinary(unsigned int num) 
             {

    for (int i = sizeof(unsigned int) * 8 - 1; i >= 0; i--) 
              {
        printf("%d", (num >> i) & 1);
    }
    printf("\n");
}

int main() {
    unsigned int number = 0;
    int position;

    printf("Enter a number in decimal: ");
    scanf("%u", &number);

    printf("Binary representations: ");
    printBinary(number);

    printf("Enter the position (0-31) to perform the operation: ");
    scanf("%d", &position);

    printf("Choose an operation:\n,(1). Set Bit\n,(2). Clear Bit\n,(3). Toggle Bit\n");
   
    int choice;
    scanf("%d", &choice);

    switch (choice) 
    {
        case 1:
            SET_BIT(number, position);
            break;
        case 2:
            CLEAR_BIT(number, position);
            break;
        case 3:
            TOGGLE_BIT(number, position);
            break;
        default:
            printf("Invalid choice.\n");
            return 0;
    }

    printf("Result binary representation: ");
    printBinary(number);

    printf("Result decimal value: %u\n", number);

    return 0;
}

