#include <stdio.h>
/**
 * main - Entry point
 * @s: string
 * @accept: checker
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, x, boo, c;

	c = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		boo = 0;
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[i])
			{
				c++;
				boo = 1;
			}
		}
	}
}
