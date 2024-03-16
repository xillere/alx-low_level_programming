#include "search_algos.h"

/**
 * recursive_search - searches for value in array 
 * with Binary search algorithm
 *
 * @array: array
 * @size: array size
 * @value: value
 * Return: index
 */
int recursive(int *array, size_t size, int value)
{
	size_t bytwo = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (bytwo && size % 2 == 0)
		bytwo--;

	if (value == array[bytwo])
		return ((int)bytwo);

	if (value < array[bytwo])
		return (recursive(array, bytwo, value));

	half++;

	return (recursive(array + bytwo, size - bytwo, value) + bytwo);
}

/**
 * binary_search - calls to binary_search to return
 * the index of the number
 *
 * @array: array to search
 * @size: array size
 * @value: value
 * Return: index
 */
int binary_search(int *array, size_t size, int value)
{
	int index;

	index = recursive(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
