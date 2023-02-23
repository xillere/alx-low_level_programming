#include <stdio.h>
/**
 * more_numbers - Entry point
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int x = 0;

	while (x < 10)
	{
		int i = 48;
		int num = 48;

		while (i < 58)
		{
			putchar(i);
			i++;
		}

		while (num < 53)
		{
			putchar('1' + num);
			num++;
		}
		x++;
		putchar('\n');
	}
}
