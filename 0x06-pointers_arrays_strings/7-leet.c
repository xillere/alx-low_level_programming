#include <stdio.h>
#include <string.h>
/**
 * leet - Entry point
 * @str: string
 * Return: Always 0 (Success)
 */
char *leet(char *str)
{
	char *fin = str;
	char let[] = { 'a', 'e', 'o', 't', 'l' };
	char num[] = { 4, 3, 0, 7, 1 };
	int i = 0;

	while (*str)
	{
		for (i = 0; i < 5; i++)
		{
			if (*str == let[i] || *str == let[i] - 32)
			{
				*str = num[i] + '0';
			}
		}
	str++;
	}
	return (fin);
}
