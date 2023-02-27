#include <stdio.h>
/**
 * swap_int - Entry point
 * @a: integer one
 * @b: integer two
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int *swap;
	int sw;

	swap = &sw;
	*swap = *a;
	*a = *b;
	*b = *swap;
}
