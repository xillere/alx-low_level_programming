#include <stdio.h>
/**
 * print_line - Entry point
 * @n: input
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	int i = 0;

	if (n == 0 || n < 0)
	{
		putchar('\n');
	}
	else
	{
		while (i < n)
		{
			putchar('_');
			i++;
		}
		putchar('\n');
	}
}
