#include <stdio.h>
#include <ctype.h>
#include <string.h>
/**
 * string_toupper - Entry point
 * @*: pointer
 * Return: Always 0 (Success)
 */
char *string_toupper(char *str)
{
	int i;
	int c;

	c = strlen(str);

	for (i = 0; i <= c; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
