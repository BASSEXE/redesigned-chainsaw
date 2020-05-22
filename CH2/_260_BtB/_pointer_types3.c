#include <stdio.h>

int main()
{
	int i;

	char char_array[5] = {'a', 'b', 'c', 'd', 'e'};
	int int_array[5] = {1, 2, 3, 4, 5};
	
	char *char_pointer = (char *)int_array;	// Type casting example
	int *int_pointer = (int *)char_array;	// 
	//char *char_pointer = char_array;
	//int *int_pointer = int_array;
	//char_pointer = char_array;
	//int_pointer = int_array;
	
	for(i=0; i<5; i++)
	{
		//Iterate through int array with int_pointer
		printf("[interger pointer] points to %p, which contains the interger %d\n", int_pointer, *int_pointer);
		
		int_pointer = (int *) ((char*)int_pointer +1);
	}

	for(i=0; i<5; i++)
        {
                //Iterate through int array with int_pointer
                printf("[char pointer] points to %p, which contains the char  %d\n", char_pointer, *char_pointer);

                char_pointer =(char *) ((int *) char_pointer +1);
        }
	return 0;
}
