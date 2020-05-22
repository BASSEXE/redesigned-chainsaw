#include <stdio.h>
#include <string.h>

int main() 
{
	char str_a[20];		//20 character array
	char *pointer;		//A pointer to str_a
	char *pointer2;		//Another pointer

	strcpy(str_a, "Hello, world!!\n");
	pointer = str_a;	//Set first pointer to str_a
	printf(str_a);

	pointer2 = pointer + 2;	//Set second pointer 2 bytes into str_a
	printf(pointer2);	
	strcpy(pointer2, "y you guys!\n");	//Copy string to str_a[2]
	printf(pointer);
	return 0;
}
