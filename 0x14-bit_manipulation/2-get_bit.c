#include "main.h"

/**
* get_bit - returns the value of a bit at a given index
* @n: unsigned int
* @index: index of a binary
* Return: the value of the bit at index index or -1 if an error occured
*/

int get_bit(unsigned long int n, unsigned int index)

{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	if ((n & (1UL << index)) != 0)
		return (1);

	else
		return (0);
}
