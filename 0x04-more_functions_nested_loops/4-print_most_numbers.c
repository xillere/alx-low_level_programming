#include <stdio.h>
/**
 * print_most_numbers - Entry point
 *
 *
 */
void print_most_numbers(void)
{
	int i = 48;

	while (i < 58)
	{
		if (i != 50 && i != 52)
		{
			putchar(i);
			i++;
		}
	}
	putchar('\n');
}
