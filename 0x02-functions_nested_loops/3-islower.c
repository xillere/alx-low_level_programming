#include <stdio.h>
/**
 * _islower - Entry point
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	while (c < 123)
	{
		if (96 < c < 123)
		{
			return(1);
		}
	}
	return (0);
}
