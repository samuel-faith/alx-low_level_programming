#include "main.h"

/**
* Main - Entry point
*
* Description - functions that checks for upper case letter
*
* _isupper - prints upper case
*
*@c: cahracter to be checked
*
* Return: returns 1 if uppercase, otherwise 0
*/

int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
