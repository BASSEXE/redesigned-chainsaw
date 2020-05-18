#include <stdio.h>

int main()
{
	int a = 13, 
	    b = 5;
	
	float c = a  / b,		//Division using intergers. 
	      d = (float) a / (float) b;	//Divide intergers typecasted to floats

	printf("[intergers]\t a = %d\t b = %d\n", a, b);
	printf("[floats]\t c = %f\t d = %f\n", c,d);

	return 0;
}
