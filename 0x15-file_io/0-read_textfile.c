#include "main.h"

/**
* read_textfile - reads a text file and prints it to the POSIX standard output.
* @filename: path to file
* @letters: chars to read
* @Return: chars read
*/

ssize_t read_textfile(const char *filename, size_t letters)

{
	char *buf;

	FILE *sam;

	ssize_t nread;

	if (!filename)
		return (0);

	sam = fopen(filename, "r");

	if (!sam)
		return (0);

	buf = malloc(letters + 1);

	if (!buf)
	{
		fclose(sam);
		return (0);
	}

	nread = fread(buf, 1, letters, sam);

	fclose(sam);

	if (nread == -1 || write(STDOUT_FILENO, buf, nread) != nread)
	{
		free(buf);
		return (0);
	}

	buf[nread] = '\0';
	free(buf);
	return (nread);
}
