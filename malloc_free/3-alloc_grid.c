#include "main.h"

/**
 *
 *
 *
 *
 *
 */
int **alloc_grid(int width, int height)
{
	int **a = NULL;
	int i = 0;

	a = malloc(sizeof(int *) * height);

	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);
	}
	return (a);
}
