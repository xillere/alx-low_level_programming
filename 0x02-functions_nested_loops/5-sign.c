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
		return (1);
	}
	else if (num == 0)
	{
		putchar('0');
		return (0);
	}
	else
	{
		return (-1);
		putchar('-');
	}
}
