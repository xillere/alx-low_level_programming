#include <stdio.h>
/**
 * print_sign - Entry point
 * @n: input
 * Return: Always 0 (Success)
 */
int print_sign(int n)
{
	int num = n;

	if (num > 0)
	{
		putchar('+');
		putchar('1');
	}
	else if (num == 0)
	{
		putchar('0');
		putchar('0');
	}
	else
	{
		putchar('-');
		putchar('1');
	}
	return (+1);
}
