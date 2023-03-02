#include <stdio.h>
#include <string.h>
/**
 * _strcmp - Entry point
 * @s1: string
 * @s2: anada string
 * Return: Always 0 (Success)
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int difference;
	int m;

	m = strlen(s1);

	for (i = 0 ; i < m && s1[i] != '\0' ; i++)
	{
		difference = s1[i] - s2[i];
		if (difference != 0)
		{
			return (difference);
		}
	}
	return (0);
}
