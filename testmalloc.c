#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	int *a;

	for(i=0; i <10; i++)
	{
		a = malloc(sizeof(int) * 100);
	}

	return 0;
}
