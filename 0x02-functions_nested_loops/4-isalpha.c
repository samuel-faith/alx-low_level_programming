#include "main.h"

/**
* _isalpha - checks for alphabetic character.
*
* @c: checks input of function
*
* Return: return 1 if c is alphabetic otherwise returns 0 (success)
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
