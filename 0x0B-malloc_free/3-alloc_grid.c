#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - creates 2d array
 * @width: width
 * @height: height
 *
 * Return: pointer (Success)
 * or NULL (Error)
 */
int **alloc_grid(int width, int height)
{
	int **arr2;
	int i, j;

	if (height <= 0 || width <= 0)
		return (NULL);

	arr2 = (int **) malloc(sizeof(int *) * height);

	if (arr2 == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr2[i] = (int *) malloc(sizeof(int) * width);
		if (arr2[i] == NULL)
		{
			free(arr2);
			for (j = 0; j <= i; j++)
				free(arr2[j]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr2[i][j] = 0;
		}
	}
	return (arr2);
}
