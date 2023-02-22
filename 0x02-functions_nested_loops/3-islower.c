#include <stdio.h>
/**
 * _islower - Entry point
 * @c: char
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	int ch = c;

	if (ch > 96 && ch < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
