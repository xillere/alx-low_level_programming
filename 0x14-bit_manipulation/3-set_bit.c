#include "main.h"

/**
 * set_bit - sets value to 1 at any postion
 * @n: number
 * @index: position from 0
 * Return: 1 on success, on failure return -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > 64)
	{
		return (-1);
	}

	for (i = 1; index > 0; index--, i *= 2)
		;
	*n += i;

	return (1);
}
