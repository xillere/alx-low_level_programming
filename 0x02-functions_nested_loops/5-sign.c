#include <stdio.h>
/**
 * print_sign - Entry point
 * @n: variable
 * Return: Always 0 (Success)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar(43);
		putchar('1');
	}
	else if (n == 0)
	{
		putchar(48);
		putchar('0');
	}
	else
	{
		putchar(45);
		return (-1);
	}
}
