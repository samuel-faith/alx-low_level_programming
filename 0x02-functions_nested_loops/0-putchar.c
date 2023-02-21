#include "main.h"

/**
* main - Entry point
*
* Description: code that prints _putchar using putchar prototype
*
* code by SammieDevs
*
* Return: Always 0 (success)
*/

int main(void)
{
	char x[] = "_putchar";
	int i;

	for (i = 0; i <= 7; i++)
		_putchar(x[i]);

	_putchar('\n');


	return (0);
}
