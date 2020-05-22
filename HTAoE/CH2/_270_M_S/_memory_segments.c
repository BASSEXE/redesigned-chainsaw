#include <stdio.h>
#include <stdlib.h>

int global_var;

int global_initialized_var =5;

void function(){
	//ghost function
	
	int stack_var; // has same name as one in main

	printf("the function's stack_var is at address 0x%08x\n", &stack_var);
}

int main()
{
	int stack_var;		//Same name as one in function
	static int static_initialized_var =5;
	static int static_var;
	int *heap_var_ptr;

	heap_var_ptr = (int *) malloc(4);

	//Variables in data seg
	printf("global_initalized_var is at address 0x%08x\n", &global_initialized_var);
	printf("static_initialized_var is at address 0x%08x\n", &static_initialized_var);

	//variables in bss segment
	printf("static_var is at address 0x%08x\n", &static_var);
	printf("global_var is at address 0x%08x\n", &global_var);

	//heap segment
	printf("heap_var is at address 0x%08x\n", heap_var_ptr);
	
	//stack segment
	printf("stack_var is at address 0x%08x\n", stack_var);
	function();
	return 0;
}
