#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int s, b;

	s = 97;
	b = 65;

	while (s < 123)
	{
		putchar(s);
		s++;
	}
	while (b < 91)
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
