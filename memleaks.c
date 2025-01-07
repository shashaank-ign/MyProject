#include<stdio.h>
#include<stdlib.h>


int *create_array(int num) {
	int *arr = (int*) malloc(num * sizeof(int));
	return arr;
}



void fill_array(int *arr, int size) {
	int i;
	for(i = 0; i < size; i++) {
		arr[i] = rand();
	}
}



void print_array(int *arr, int size) {
	int i;
	printf("Printing the array elements\n");
    for(i = 0; i < size; i++) {
        printf("%d ",*(arr + i));
    }
	printf("\n");
}


void main() {
	
	int  size ,*ptr = NULL;
	printf("Enter the size of the memory:");
	scanf("%d",&size);
	ptr = create_array(size);
	fill_array(ptr,size);
	print_array(ptr,size);
	

}
