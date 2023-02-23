#include <stdio.h>
/**
 * _isupper - Entry point
 * @c: input
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
	int ch = c;

	if (ch > 64 && ch < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
