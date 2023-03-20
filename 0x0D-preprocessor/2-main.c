#include <stdio.h>

/**
* main - Entry point
*
* Code to print the file it was compiled from
*
*Return: 0 success
*/

int main(void)

{
	printf("The name of the file is: %s\n", __FILE__);

	return (0);
}
