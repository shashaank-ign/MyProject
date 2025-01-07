
#include<stdio.h>
#include<stdlib.h>


int g_var = 10;

int * allocate_memory(int num) {
	int *ptr = NULL;
	ptr = (int *) malloc ( num*sizeof(int));
	return ptr;
}


void print_address(int *p) {
	
	printf("The address of the allocated memory is  %p\n",p);
}


void main() {
	
	int *p;
	//declaring one local variable 
	int l_var = 25;

	p = allocate_memory(5);
	
	print_address(p);
		
	printf(" global variable %d\n ",g_var);
	printf(" Global variable address %p\n",&g_var);	

	
	printf("local variable printing where it is initialised %d\n",l_var);
	printf("local variable address %p\n",&l_var);
	free(p);

}
	
	
