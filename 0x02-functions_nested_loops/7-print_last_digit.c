#include <stdio.h>
/**
 * print_last_digit - Entry point
 * @n: var
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	int i = n % 10;

	if (i < 0)
		i *= -1;

	putchar(i + '0');

	return (i);
}
