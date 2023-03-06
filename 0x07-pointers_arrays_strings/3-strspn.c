#include <stdio.h>
/**
 * main - Entry point
 * @s: string
 * @accept: checker
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, x, c, boo;

	c = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		boo = 0;
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (s[i] == accept[x])
			{
				c++;
				boo = 1;
				break;
			}
		}
		if (boo != 1)
		{
			break;
		}
		else
		{
			c++;
		}

	}
	return (c);
}
