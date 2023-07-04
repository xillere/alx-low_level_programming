#include <stdlib.h>
#include "main.h"

/**
 * *create_array - create array
 * @size: measure if the array
 * @c: char
 *
 * Return: pointer to the array (Success), NULL (Error)
 */
char *create_array(unsigned int size, char c)
{
	char *h;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	h = (char *) malloc(sizeof(char) * size);

	if (h == NULL)
		return (0);

	while (i < size)
	{
		*(h + i) = c;
		i++;
	}

	*(h + i) = '\0';

	return (h);
}
