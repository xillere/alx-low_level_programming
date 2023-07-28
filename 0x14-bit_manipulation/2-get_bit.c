#include "main.h"
#include <stdio.h>
/**
 * get_bit - gets bit value atposition
 * @n: number
 * @index: index
 * Return: index, -1 on fail
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;

	if (index > 64)
	{
		return (-1);
	}

	i = n >> index;

	return (i & 1);
}
