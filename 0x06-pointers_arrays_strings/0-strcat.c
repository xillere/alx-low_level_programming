#include <stdio.h>
#include <string.h>
/**
 * *_strcat - Entry point
 * @dest: final string
 * @src: string to be added
 * Return: Always 0 (Success)
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int z;
	int x;

	z = strlen(dest);
	x = strlen(src);

	for (i = 0; i <= x; i++)
	{
		dest[z + i] = src[i];
	}
	return (dest);
}
