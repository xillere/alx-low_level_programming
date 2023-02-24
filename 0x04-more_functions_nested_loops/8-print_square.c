#include <stdio.h>
/**
 * print_square - Entry point
 * @size: idk
 * Return: Always 0 (Success)
 */
void print_square(int size)
{
	int i = 0;

	if (size < 0 && size == 0)
	{
		putchar('\n');
	}
	else
	{
		while (i < size)
		{
			int z = 0;

			while (z < size)
			{
				putchar(35);
				z++;
			}
			i++;
		}
	}
}
