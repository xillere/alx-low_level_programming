#include <stdio.h>
/**
 * print_diagonal - Entry point
 *@n: input
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
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
			if (i != 0)
			{
				putchar(32);
			}
		}
		putchar('\\');
		putchar('\n');
	}
}
