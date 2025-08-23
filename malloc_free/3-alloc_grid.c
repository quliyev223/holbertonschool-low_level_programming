#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *               using a single contiguous block of memory
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to the 2D array, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;


	/* Return NULL if width or height is invalid */
	if (width <= 0 || height <= 0)
		return (NULL);


	/* Allocate memory for each row (array of int pointers) */
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	/* Allocate memory for each row and initialize to 0 */
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			/* Free previously allocated rows if malloc fails */
			while (i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}


		/* Initialize the row to 0 */
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
