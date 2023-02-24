#include <stdio.h>
/**
 * print_diagonal - Entry point
 *@n: input
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
	int z = 0;

	if (n == 0 || n < 0)
	{
		putchar('\n');
	}
	else
	{
		while (z < n)
		{
			int i = 0;

			while (i < z)
			{
				putchar(32);
				i++;
			}
			putchar('\\');
			putchar('\n');
			z++;
		}
	}
}
