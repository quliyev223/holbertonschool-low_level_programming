#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created
 * @grid: pointer to the 2D array
 * @height: number of rows in the grid
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;


	if (grid == NULL)
		return;


	/* Free each row */
	for (i = 0; i < height; i++)
		free(grid[i]);


	/* Free the array of pointers */
	free(grid);
}
