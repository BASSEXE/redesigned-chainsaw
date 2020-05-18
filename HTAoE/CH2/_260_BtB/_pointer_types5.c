#include <stdio.h>

int main()
{
	int i;

	char char_array[5] = {'a', 'b', 'c', 'd', 'e'};
	int int_array[5] = {1, 2, 3, 4, 5};
	
	unsigned int hacky_nonpointer = (unsigned int) char_array;
	//void *void_pointer = (void *) char_array;	//Void pointer usage simplifies casting
	//char *char_pointer = (char *)int_array;	// Type casting example
	//int *int_pointer = (int *)char_array;	// 
	//char *char_pointer = char_array;
	//int *int_pointer = int_array;
	//char_pointer = char_array;
	//int_pointer = int_array;
	

	for(i=0; i<5; i++)
	{
		//Iterate through int array with int_pointer
		printf("[hacky_nonpointer] points to %p, which contains the char '%c'\n", hacky_nonpointer, *((char *) hacky_nonpointer));
		
		//void_pointer = (void *) ((char *)void_pointer +1);
		hacky_nonpointer = hacky_nonpointer +sizeof(char);
	}
	
	hacky_nonpointer = (unsigned int) int_array;
	//void_pointer = (void *) int_array;

	for(i=0; i<5; i++)
        {
                //Iterate through int array with int_pointer
                printf("[hacky_nonpointer] points to %p, which contains the int  '%d'\n", hacky_nonpointer, *((int *)hacky_nonpointer));

               // void_pointer =(void *) ((int *) void_pointer +1);
	       hacky_nonpointer = hacky_nonpointer +sizeof(int);
        }
	return 0;
}
