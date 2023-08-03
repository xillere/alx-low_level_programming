#include "main.h"
#include <stdio.h>

/**
 * print_binary - displat binary
 * @n: number to convert
 */
void print_binary(unsigned long int n)
{
	int pos;

	unsigned long int tmp;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (tmp = n, pos = 0; (tmp >>= 1) > 0; pos++)
		;

	for (; pos >= 0; pos--)
	{
		if ((n >> pos) & 1)
			printf("1");
		else
			printf("0");
	}
}
