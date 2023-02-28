#include <stdio.h>
/**
 * print_rev - Entry point
 * @s: character
 * Return: Always 0 (Success)
 */
void print_rev(char *s)
{
	int i;
	int g;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	for (g = i - 1; g >= 0; g--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
