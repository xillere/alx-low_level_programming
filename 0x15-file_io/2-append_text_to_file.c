#include "main.h"

/**
 * append_text_to_file - appends tex
 * @filename: pointer to the filename
 * @text_content: pointer to sring to add
 *
 * Return: on failure or NULL -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int wr, op, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++)
			;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, len);

	if (op == -1 || wr == -1)
	{
		return (-1);
	}

	close(op);

	return (1);
}