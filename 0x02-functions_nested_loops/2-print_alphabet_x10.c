#include <stdio.h>
/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int ch = 'a';
	int i = 0;

	while (i < 10)
	{
		int ch = 'a';
		while (ch < 123)
	{
		putchar(ch);
		ch++;
	}
	i++;
	putchar('\n');
	}
}
