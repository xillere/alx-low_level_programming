#include "main.h"
#include <stdio.h>

/**
 * flip_bits - flip bit
 * @n: 1st no to flip
 * @m: 2nd no to convert to
 * Return: total of flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	int i;

	diff = n ^ m;
	i = 0;

	while (diff)
	{
		i++;
		diff &= (diff - 1);
	}

	return (i);
}
