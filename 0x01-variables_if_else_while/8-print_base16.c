#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, a;

	for (n = 0; n < 10; n++)
	{
		putchar(48 + n);
	}
	for (a = 97; a < 103; a++)
	{
		putchar(a);
	}
	putchar(a);
	return (0);
}
