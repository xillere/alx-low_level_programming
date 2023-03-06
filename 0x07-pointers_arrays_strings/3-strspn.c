#include <stdio.h>
/**
 * main - Entry point
 * @s: string
 * @accept: checker
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, x, c;

	c = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (s[i] == accept[i])
			{
				c++;
			}
		}
	}
	return (c);
}
