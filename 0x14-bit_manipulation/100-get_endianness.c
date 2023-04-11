#include "main.h"

/**
* get_endianness - checks if multibyte data is the endianness.
 * Return: If big-endian - 0, if little-endian -1.
 */

int get_endianness(void)

{
	int num_sam;

	char *ptr;

	num_sam = 1;

	ptr = (char *)&num_sam;

	return (*ptr == 1);
}
