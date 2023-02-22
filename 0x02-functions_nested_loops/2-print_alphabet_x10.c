#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
    int ch = 'a';

    for (int i = 0; i < 10; i++)
    {
	    while (ch < 123)
	    {
		    putchar(ch);
		    ch++;
	    }
	    putchar('\n');
    }
}
