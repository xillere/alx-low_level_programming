#include <stdio.h>
#include <string.h>
/**
 * *_strncat - Entry point
 * @dest: final string
 * @src: string to be added
 * @n: integer
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int z;

	z = strlen(dest);

	for (i = 0; i < n ; i++)
	{
		dest[z + i] = src[i];
	}
	return (dest);
}
