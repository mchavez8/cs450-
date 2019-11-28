#include <stdio.h>
#include <stdlib.h>
int main()
{
	//char *x;
	//char *y;
	// example two of incorrect use of malloc/ memory leaks 
	// if we re-assign a pointer to a new value before being freed, we have memory leaks 
	char *x = malloc(128*sizeof(char)); // allocating space for character x
	char *y = malloc(128*sizeof(char)); // allocating space for character y
	y = x; // setting a new value before freeing 
	free(x);
	free(y);
}

