#include "main.h"

/**
* _strncpy  copies a string
*
*@dest: the destination of the strings
*
*@src: the source of the strings 
*
*@n: the length of int
*
*Return: pointer to the resulting string dest
*/

char *_strncpy(char *dest, char *src, int n)

{
	int i;

	for (i = 0; i < n && *(src + i); i++)
	{
		*(dest + i) = *(src + i);
	}

	for (; i < n; i++)
	{
		*(dest + i) = '\0';
	}

	return (dest);
}

