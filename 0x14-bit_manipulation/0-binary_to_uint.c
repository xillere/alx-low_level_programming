#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert binary to int
 * @b: string
 * Return: result
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result, pt;
	int l;

	if (b == NULL)
	{
		return (0);
	}

	for (l = 0; b[l]; l++)
	{
		if ((b[l] != '0') && (b[l] != '1'))
		{
			return (0);
		}
	}

	for (pt = 1, result = 0, l--; l >= 0; l--, pt *= 2)
	{
		if (b[l] == '1')
			result += pt;
	}

	return (result);
}
