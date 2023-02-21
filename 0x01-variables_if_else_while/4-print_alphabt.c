#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	ch = 'a';/* 101 and 113 */
	while (ch < 123)
	{
		if (ch == 101)
		{
		}
		else if (ch == 113)
		{
		}
		else
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
