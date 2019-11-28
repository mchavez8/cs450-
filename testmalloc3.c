#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *pointer; // a pointer to use for malloc 
	pointer = (int *)malloc(sizeof(int));

	if (pointer == 0)
	{
		printf("Error: no memory left\n");
		return 1;
	}

	*pointer = 30; // now lets set the pointer to a random value, 30 and set that value to the allocated space 
	printf("%d\n", *pointer);
//	free(pointer);
	return 0;
}
