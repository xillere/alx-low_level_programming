#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	num = '/';

	while (num < 57)
	{
		putchar(num+1);
		putchar(',');
		putchar(' ');
		num++;
	}
	putchar('\n');
	return (0);
}
