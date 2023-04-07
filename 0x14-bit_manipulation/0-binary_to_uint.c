#include "main.h"

/**
* int binary_to_uint - converts a binary number to an unsigned int.
* @b: binary
* Return: unsigned int
*/

unsigned int binary_to_uint(const char *b)

{
	unsigned int converted_num = 0;

	const char *p;

	if (b == NULL)
		return (0);

	for (p = b; *p != '\0'; ++p)
	{
		if (*p == '0')
			converted_num = (converted_num << 1);

		else if (*p == '1')
		{
			converted_num = (converted_num << 1) | 1;
		}

		else
			return (0);
	}

	return (converted_num);
}
