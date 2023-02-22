#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	int ch = c;

	if (ch > 64 && ch < 91)
	{
		return (1);
	}
	else if (ch > 96 && ch <123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
