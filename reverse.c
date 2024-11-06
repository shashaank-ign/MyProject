#include <stdio.h>

int main() {
    unsigned int X = 0x0f02a0b0;
    printf("Input: 0x%08X\n", X);
    unsigned int reversedX = reverseBytes(X);
    printf("Output: 0x%08X\n", reversedX);

    return 0;
}

unsigned int reverseBytes(unsigned int x) {
    

   return ((x & 0x000000FF) << 24) |
           ((x & 0x0000FF00) << 8)  |
           ((x & 0x00FF0000) >> 8)  |
           ((x & 0xFF000000) >> 24);

}



