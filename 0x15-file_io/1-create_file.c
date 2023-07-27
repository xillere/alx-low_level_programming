#include "main.h"

/**
 * create_file - creates file
 * @filename: filename
 * @text_content: string to write
 * Return: fail = -1 no success - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int wr, op, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(op, text_content, len);

	if (wr == -1 || op == -1)
		return (-1);

	close(op);

	return (1);
}
