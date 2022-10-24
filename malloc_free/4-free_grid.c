#include "main.h"

/**
 * free_grid - funcion
 * @grid: pointer
 * @height: integer
 * Return: always
 */
void free_grid(int **grid, int height)
{
	for (height -= 1; height >= 0; height--)
		free(grid[height]);
	free(grid);
}
