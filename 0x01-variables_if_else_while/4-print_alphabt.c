#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int s;

	s = 97;

	while (s < 123)
	{
		if ((s != 113) && (s != 101))
		{
			putchar(s);
		}
		s++;
	}
	putchar('\n');
	return (0);
}
