#include "main.h"

/**
* malloc_checked - function that allocates memory using malloc.
*
*@b: memory
*
*Return: pointer
*/

void *malloc_checked(unsigned int b)

{
	void *i;
	
	i = malloc(b);

	if (i == NULL);
		exit(98);

	return (i);
}
