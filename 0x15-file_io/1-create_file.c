#include "main.h"

/**
* create_file - creates a file.
* @filename: path to file
* @text_content: content
* Return: chars read
*/

int create_file(const char *filename, char *text_content)

{
	int sam;

	ssize_t length, nwritten;

	if (!filename)
		return (-1);

	sam = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (sam == -1)
		return (-1);

	if (text_content)
	{
		length = strlen(text_content);
		nwritten = write(sam, text_content, length);

		if (nwritten == -1 || nwritten != length)
		{
			close(sam);
			return (-1);
		}
	}

	close(sam);

	return (1);
}
