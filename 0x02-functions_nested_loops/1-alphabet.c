#include "main.h"

/**
* main - Entry point
*
* description - code that prints the alphabets in lower case
*
* code by SammieDevs
*
*Return: 0 (success)
*/

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');

	return (0);
}
