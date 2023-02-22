#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int ch = 'a';

	while (ch < 123)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
