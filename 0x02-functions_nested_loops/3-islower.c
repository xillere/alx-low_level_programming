#include <stdio.h>
/**
 * _islower - Entry point
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	int ch = c;
	while (ch < 123)
	{
		if (ch > 96)
		{
			return(1);
		}
		ch++;
	}
	return(0);
}
