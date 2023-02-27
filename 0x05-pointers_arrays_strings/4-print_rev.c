#include <stdio.h>
/**
 * print_rev - Entry point
 * @s: character
 * Return: Always 0 (Success)
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\n'; i++)
	{
	}
	for (; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
