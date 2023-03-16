#include "main.h"

/**
* string_nconcat - string_nconcat
*
*@s1: first char
*
*@s2: second char
*
*@n: int
*
*Return: NULL on fail
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	unsigned int s1_len = 0, s2_len = 0;
	
	char *result;

	if (s1 == NULL)
		s1 = "";
	
	if (s2 == NULL)
		s2 = "";

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	if (n >= s2_len)
		n = s2_len;

	result = (char *) malloc(sizeof(char) * (s1_len + n + 1));

	if (result == NULL)
		return NULL;

	memcpy(result, s1, s1_len);
	memcpy(result + s1_len, s2, n);
	result[s1_len + n] = '\0';

	return result;
}

