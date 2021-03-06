#include<stdio.h>
#include<stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width
 * @height: height
 *
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int n = 0;
	int m = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		return (NULL);
	}
	for (n = 0;  n < height; n++)
	{
		grid[n] = malloc(sizeof(int) * width);
		if (grid == NULL)
		{
			for (m = 0;  m < height; m++)
			{
				free(grid[n]);
			}
			free(grid);
			return (NULL);
		}
	}
	for (m = 0; m < height; m++)
	{
		for (n = 0; n < width; n++)
		{
			grid[m][n] = 0;
		}
	}
	return (grid);
}
