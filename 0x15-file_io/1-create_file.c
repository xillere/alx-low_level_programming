#include "main.h"

/**
 * create_file -makes file
 * @filename: pointer to the filename
 * @text_content: pointer to string
 * Return: on failure -1
 *
 */
int create_file(const char *filename, char *text_content)
{
	int len, op, wr = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++)
			;
	}

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(o, text_content, len);

	if (op == -1 || wr == -1)
	{
		return (-1);
	}

	close(op);

	return (1);
}
