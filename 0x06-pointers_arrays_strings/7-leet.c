#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int len = strlen(str);
	int i;

	for (i = 0; i < len; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i] == 'a' || str[i] == 'A')
			{
				str[i] = '4';
			}
			else if (str[i] == 'e' || str[i] == 'E')
			{
				str[i] = '3';
			}
			else if (str[i] == 'o' || str[i] == 'O')
			{
				str[i] = '0';
			}
			else if (str[i] == 't' || str[i] == 'T')
			{
				str[i] = '7';
			}
			else if (str[i] == 'l' || str[i] == 'L')
			{
				str[i] = '1';
			}
			else
			{
			}
		}
	}
	return (str);
}
