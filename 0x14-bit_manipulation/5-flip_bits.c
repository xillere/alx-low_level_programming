#include "main.h"
#include <stdio.h>
/**
 * flip_bits - flip bits
 * @n: first number
 * @m: second number to do a conversion to
 * Return: no. of flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	unsigned long int conv;

	conv = n ^ m;
	i = 0;

	while (conv)
	{
		i++;
		conv &= (conv - 1);
	}

	return (i);
}
