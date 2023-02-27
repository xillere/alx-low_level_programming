#include <stdio.h>
/**
 * swap_int - Entry point
 * @a: integer one
 * @b: integer two
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int swap;
	int A1;
	int B1;

	a = &A1;
	b = &B1;

	swap = A1;
	*a = B1;
	*b = swap;
}
