#include "main.h"
/**
 * set_bit - sets bit to 1
 * @n: number passed by pointer
 * @index: position
 * Return: 1 success, -1 on fail
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
