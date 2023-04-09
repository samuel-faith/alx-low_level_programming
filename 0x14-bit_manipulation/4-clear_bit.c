#include "main.h"

/**
* clear_bit - sets the value of a bit to 0 at a given index.
* @n: number
* @index: index within binary
* Return: 1 if success, or -1 if error
*/

int clear_bit(unsigned long int *n, unsigned int index)

{
	unsigned long int dig = 1;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	dig = ~(1UL << index);
	*n &= dig;

	return (1);
}
