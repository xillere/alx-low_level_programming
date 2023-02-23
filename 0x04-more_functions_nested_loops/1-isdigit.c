#include <stdio.h>
/**
 * _isdigit - Entry point
 * @c: input
 * Return: Always 0 (Success)
 */
int _isdigit(int c)
{
	int num = c;

	if (num > 47 && num < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
