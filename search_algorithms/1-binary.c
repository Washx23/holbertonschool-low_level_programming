#include "search_algos.h"
/**
 * binary_search - unction that searches for a value in a
 * sorted array of integers using the Binary search algorithm
 * @array: array
 * @size: size of array
 * @value: is the value to search for
 * Return: (-1)
 */
int binary_search(int *array, size_t size, int value)
{
	int i, j, k;

	if (!array)
		return (-1);
	for (j = 0, k = size - 1; k >= j;)
	{
		printf("Searching in array: ");
		for (i = j; i < k; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		i = j + (k - j) / 2;
		if (array[i] == value)
			return (i);
		if (value < array[i])
			k = i - 1;
		else
			j = i + 1;
	}
	return (-1);
}
