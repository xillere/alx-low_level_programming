#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch1, ch2;

	ch1 = 'a';
	ch2 = 'A';
	while (ch1 < 123)
	{
		putchar(ch1);
		ch1++;
	}
	while (ch2 < 91)
	{
		putchar(ch2);
		ch2++;
	}
	putchar('\n');
	return (0);
}
