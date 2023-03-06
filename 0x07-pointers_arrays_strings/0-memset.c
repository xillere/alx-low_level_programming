#include <stdio.h>
/**
 * _memset - Entry point
 * @s: pointer
 * @b: constant
 * @n: no of bytes
 * Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char *m = s;

	while (i < n)
	{
		*s++ = b;
		i++;
	}
	return (m);
}
