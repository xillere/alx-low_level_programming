#include <stdio.h>
/**
 * reverse_array - Entry point
 * @a: array
 * @n: number of elements
 * Return: Always 0 (Success)
 */
void reverse_array(int *a, int n)
{
	int i;
	int owari;
	int copy[12];

	owari = n;

	for (i = 0; i < n; i++)
	{
		copy[i] = a[i];
	}
	for (i = 0; i < n; i++)
	{
		a[i] = copy[owari - 1];
		owari--;
	}
}
