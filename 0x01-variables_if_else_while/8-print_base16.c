#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	int ch;

	num = '0';
	ch = 'a';

	while (num < 58)
	{
		putchar(num);
		num++;
	}
	while (ch < 103)
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
