#include <stdio.h>

void function() {		// Dummy function
	int var =5;
	static int static_var =5;		//static variable initialized

	printf("\t[in function] var = %d\n", var);
	printf("\t[in function] static_var = %d\n", static_var);
	var++;		// add 1 
	static_var++;	// to both variables
}

int main()
{
	int i;
	static int static_var =1337;		//Another static, in a different context

	for(i=0; i <5; i++){
		printf("[in main] static_var = %d\n", static_var);
		function();		//Call the function.
	}
	return 0;
}
