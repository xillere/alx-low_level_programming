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
	int a, b;

	a = strlen(s1);
	b = strlen(s2);

	if (a == b)
	{
		return (0);
	}
	if (a > b)
	{
		return (a - b);
	}
	if (b > a)
	{
		return (a - b);
	}
}
