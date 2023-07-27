#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - binary to unsigned int
 * @b: string
 * Return:  otherwise 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int total, power;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	for (power = 1, total = 0, i--; i >= 0; i--, power *= 2)
	{
		if (b[i] == '1')
			total += power;
	}

	return (total);
}
