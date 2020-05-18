#include <stdio.h>

int main()
{
	int i;

	char char_array[5] = {'a', 'b', 'c', 'd', 'e'};
	int int_array[5] = {1, 2, 3, 4, 5};
	
	void *void_pointer = (void *) char_array;	//Void pointer usage simplifies casting
	//char *char_pointer = (char *)int_array;	// Type casting example
	//int *int_pointer = (int *)char_array;	// 
	//char *char_pointer = char_array;
	//int *int_pointer = int_array;
	//char_pointer = char_array;
	//int_pointer = int_array;
	

	for(i=0; i<5; i++)
	{
		//Iterate through int array with int_pointer
		printf("[interger pointer] points to %p, which contains the interger %d\n", void_pointer, *((char *)void_pointer));
		
		void_pointer = (void *) ((char *)void_pointer +1);
	}

	void_pointer = (void *) int_array;

	for(i=0; i<5; i++)
        {
                //Iterate through int array with int_pointer
                printf("[char pointer] points to %p, which contains the char  %d\n", void_pointer, *((int *)void_pointer));

                void_pointer =(void *) ((int *) void_pointer +1);
        }
	return 0;
}
