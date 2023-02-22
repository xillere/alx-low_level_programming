#include <stdio.h>
#include <stdlib.h>
/**
 * print_last_digit - Entry point
 * @n: input
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	int lnum = abs(n) % 10;
	return (lnum);
}
