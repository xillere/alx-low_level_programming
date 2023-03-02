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
	int sum;

	if (s1[0] == s2[0])
	{
		return (0);
	}
	else if (s1[0] > s2[0])
	{
		sum = s2[0] - s1[0];
		return (sum);
	}
	else
	{
		sum = s2[0] - s1[0];
		return (sum);
	}
}
