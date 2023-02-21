#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	num = '0';

	while (num < 58)
	{
		if (num < 58)
		{
			putchar(num);
		}
		if (num < 57)
		{
		putchar(',');
		putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
