#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	ch = 'a';

	while (ch < 123)
	{
		putchar(ch);
		ch++;
	}
	putchar(32);
	return (0);
}
