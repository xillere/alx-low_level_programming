#include "main.h"

/**
 * factorial - returns
 * @n: number
 * Return: result
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
