#include <stdio.h>
#include <stdlib.h>

int main() {
    // Allocate 16 bytes of memory
    char *memory = (char *)malloc(16);

    if (memory == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    int *int_ptr = (int *)memory;

   
    int_ptr[0] = 10;     
    int_ptr[1] = 20;       
    int_ptr[2] = 30;       
    int_ptr[3] = 40;      

    for (int i = 0; i < 4; i++) {
        printf("Integer %d: Address = %p, Value = %d\n", i + 1, (int_ptr + i), *(int_ptr + i));
    }

    free(memory);

    return 0;
}

