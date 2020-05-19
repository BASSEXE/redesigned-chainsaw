#include <stdio.h>

int j = 42;		// j is global variable

void func3(){
	int i = 11,
	    j = 999;		//j as a local variable in func3 is 999
	printf("\t\t\t[in func3] i @ 0x%08x = %d\n", &i, i);
	printf("\t\t\t[in func3] j @ 0x%08x = %d\n", &j, j);
}

void func2(){
	int i =7;
	//printf("\t\t[in func2] i = %d, j = %d\n", i, j);
	printf("\t\t[in func2] i @ 0x%08x = %d\n", &i, i);
	printf("\t\t[in func2] j @ 0x%08x = %d\n", &j, j);
	printf("\t\t[in func2] setting j to 1337\n");
	j =1337;		// j is set to 1337
	func3();
	//printf("\t\t[back in func2] i = %d, j = %d\n", i, j);
	printf("\t\t[in func2] i @ 0x%08x = %d\n", &i, i);
	printf("\t\t[in func3] j @ 0x%08x = %d\n", &j, j);
}

void func1(){
	int i = 5;
	//printf("\t[in func1] i = %d, j = %d\n ", i, j);
	printf("\t[in func3] i @ 0x%08x = %d\n", &i, i);
	printf("\t[in func3] j @ 0x%08x = %d\n", &j, j);
	func2();
	//printf("\t[back in func1] i = %d, j = %d\n", i, j);
	printf("\t[in func1] i @ 0x%08x = %d\n", &i, i);
	printf("\t[in func3] j @ 0x%08x = %d\n", &j, j);
}

int main() 
{
	int i = 3;
	//printf("[in main] i = %d, j = %d\n", i, j);
	printf("[in main] i @ 0x%08x = %d\n", &i, i);
	printf("[in func3] j @ 0x%08x = %d\n", &j, j);
	func1();
	//printf("[back in main] i =%d, j = %d\n", i, j);
	printf("[back in main] i @ 0x%08x = %d\n", &i, i);
	printf("[in func3] j @ 0x%08x = %d\n", &j, j);
	return 0;
}
