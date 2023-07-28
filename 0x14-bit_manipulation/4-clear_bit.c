#include "main.h"
#include <stdio.h>
/**
 * clear_bit - set value to 0 
 * @n: ptr to no.
 * @index: pos
 * Return: 1 on success.. -1 on fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int l;

	if (index > 64)
	{
		return (-1);
	}

	l = index;

	for (i = 1; l > 0; i *= 2, l--)
		;

	if ((*n >> index) & 1)
	{
		*n -= i;
	}

	return (1);
}
