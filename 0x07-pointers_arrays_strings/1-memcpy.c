#include <stdio.h>
/**
 * _memcpy - Entry point
 * @dest: destination
 * @src: Source
 * @n: number bytes
 * Return: Always 0 (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
