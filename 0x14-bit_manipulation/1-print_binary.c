#include "main.h"
#include <stdio.h>

/**
 * print_binary - binary of number
 * @n: decimal number to print as binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int tmp;
	int m;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (tmp = n, m = 0; (tmp >>= 1) > 0; m++)
		;

	for (; m >= 0; m--)
	{
		if ((n >> m) & 1)
			printf("1");
		else
			printf("0");
	}
}
