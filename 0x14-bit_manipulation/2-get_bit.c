#include "main.h"
#include <stdio.h>
/**
 * get_bit - retrieve value of a bit at the given position
 * @n: number
 * @index: position
 * Return: value -1 on failuiure
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int result;

	if (index > 64)
	{
		return (-1);
	}

	result = n >> index;

	return (result & 1);
}
