#include <stdio.h>
/**
 * _strstr - Entry point
 * @haystack: hay
 * @needle: need
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != 0; haystack++)
	{
		char *u = haystack;
		char *d = needle;

		while (*u == *d && *d != '\0')
		{
			u++;
			d++;
		}
		if (*d == '\0')
		{
			return (haystack);
		}
	}
	return (NULL);
}
