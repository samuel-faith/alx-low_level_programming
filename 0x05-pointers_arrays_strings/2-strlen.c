#include "main.h"

/**
* _strlen - returns the length of a string.
*@s: char to check
*
* Return: 0 (success)
*/

int _strlen(char *s)

{
	int q = 0;
	for (; *s++;) 
		q++;
	return (q);

}
