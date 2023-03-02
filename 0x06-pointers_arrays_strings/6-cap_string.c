#include <stdio.h>
#include <string.h>
/**
 * cap_string - Entry point
 * @str: string to be input
 * Return: Always 0 (Success)
 */
char *cap_string(char *str)
{
	int len = strlen(str);
	int i;

	for (i = 0; i < len; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i - 1] == ' ' ||
					str[i - 1] == '\n' ||
					str[i - 1] == '\t' ||
					str[i - 1] == ',' ||
					str[i - 1] == ';' ||
					str[i - 1] == '.' ||
					str[i - 1] == '!' ||
					str[i - 1] == '?' ||
					str[i - 1] == '"' ||
					str[i - 1] == '(' ||
					str[i - 1] == ')' ||
					str[i - 1] == '{' ||
					str[i - 1] == '}')
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
