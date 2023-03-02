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
	int copy[13];

	owari = n;

	for (i = 0; i < n; i++)
	{
		copy[i] = a[i];
	}
	for (i = 0; i < n; i++, owari--)
	{
		a[i] = copy[owari];
	}
}
