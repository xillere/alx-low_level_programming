#include <stdio.h>
/**
 * _isupper - Entry point
 * @c: input
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
	int ch = c;

	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
