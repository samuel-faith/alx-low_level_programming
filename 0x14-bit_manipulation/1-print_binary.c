#include "main.h"

/**
* print_binary - prints the binary representation of a number.
* @n: unsigned int
* Return: Binary of n
*/

void print_binary(unsigned long int n)

{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) ? '1' : '0');

}
