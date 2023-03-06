#include <stdio.h>
#include <stdlib.h>
/**
 * print_diagsums - Entry point
 * @a: array
 * @size: number of bytes
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int x, i;
	int add = 0, add1 = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
	{
		add = add + a[i];
	}
	for (x = size - 1; x <= (size * size) - size; x = x + size - 1)
	{
		add1 = add1 + a[x];
		printf("%d, %d\n", add, add1);
	}
}
