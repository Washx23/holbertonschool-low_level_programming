#include "main.h"

/**
 * array_range - funcion
 * @max: integer
 * @min: integer
 * Return: always
 *
 */
int *array_range(int min, int max)
{
	int k = 0, i = 0;
	int *j = NULL;

	if (min || max)
	{
		k = max - min + 1;
		if (min > max)
			return (NULL);
		j = malloc(sizeof((max - min) + 1));
			if (j == NULL)
				return (NULL);
		for (i = 0; i < k; i++)
		{
			j[i] = min;
			min++;
		}

	}
	return (j);
}
