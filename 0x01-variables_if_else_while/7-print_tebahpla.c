#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	ch = 'z';

	while (ch > 96)
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
