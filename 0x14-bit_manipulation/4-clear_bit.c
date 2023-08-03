#include "main.h"
#include <stdio.h>

/**
 * clear_bit - set bit to 0 at any position givn
 * @n: point to no.
 * @index: pos
 * Return: 1 on success, -1 on failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int tmp;

	if (index > 64)
	{
		return (-1);
	}
	tmp = index;
	for (i = 1; tmp > 0; tmp--, i *= 2)
		;

	if ((*n >> index) & 1)
	{
		*n -= i;
	}

	return (1);
}
