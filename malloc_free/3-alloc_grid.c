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

	if (width <= 0 || height <= 0)
		return (NULL);
	a = malloc(sizeof(int *) * height);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);
		if ( a[i] == NULL)
		{
			for (--i;i >= 0; i--)
				free(a[i]);
			free(a);
			return (NULL);
		}
	}
	return (a);
}
