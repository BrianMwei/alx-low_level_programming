#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2D array of ints.
 * @width: width of array
 * @height: height of array
 * Return: pointer to result
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int row, column;
	int length = width * height;


	if (length <= 0)
		return (NULL);

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);

	for (row = 0; row < height; row++)
	{
		array[row] = malloc(sizeof(int) * width);

		if (array[row] == NULL)
		{
			for (; row >= 0; row--)
				free(array[row]);

			free(array);
			return (NULL);
		}
	}

	for (row = 0; row < height; row++)
	{
		for (column = 0; column < width; column++)
			array[row][column] = 0;
	}

	return (array);
}
