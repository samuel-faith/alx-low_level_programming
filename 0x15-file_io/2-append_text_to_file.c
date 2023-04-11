#include "main.h"

/**
* append_text_to_file - appends text at the end of a file.
* @filename: path to file
* @text_content: content
* Return: 1 0r -1
*/

int append_text_to_file(const char *filename, char *text_content)

{
	FILE *sam;

	size_t length;

	if (!filename)
		return (-1);

	sam = fopen(filename, "a");

	if (!sam)
		return (-1);

	if (text_content)
	{
		length = strlen(text_content);
		if (fwrite(text_content, sizeof(char), length, sam) != length)
		{
			fclose(sam);
			return (-1);
		}
	}

	fclose(sam);

	return (1);
}
