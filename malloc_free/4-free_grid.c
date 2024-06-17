#include "main.h"
#include <stdlib.h>
/**
 *free_grid - free a grid
 *@grid: checked output
 *@height: checked output
 *
 *Return: always return 0
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
