#include "main.h"

/**
* _islower - function to check for lower case characters
*
* description - code that checks for lower case characters
*
* @c: checks input of function
*
* Return: returns 1 if c is lowercase, otherwise returns 0 (success)
*/

int _islower(int c)
{

	if (c >= 97 && c <= 122)

	{

		return (1);

	}

	else

	{

		return (0);

	}

}

