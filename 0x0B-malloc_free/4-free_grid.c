#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - clears memory in a 2D array
 * @grid: 2D array
 * @height: height of the array
 * Return: o
 *
 */
void free_grid(int **grid, int height)
{
	int content;

	for (content = 0; content < height; content++)
	{
		free(grid[content]);
	}
	free(grid);
}
