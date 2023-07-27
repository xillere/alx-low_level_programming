#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - read and print
 * @filename: file name point
 * @letters: The number of letters the
 * Return: If the function fails fname = 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, rd, wr;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	rd = read(op, buff, letters);
	wr = write(STDOUT_FILENO, buff, rd);

	if (op == -1 || wr != rd || wr == -1 || rd == -1)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(op);

	return (wr);
}
