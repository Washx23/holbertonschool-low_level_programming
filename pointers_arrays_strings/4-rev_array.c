#include "main.h"

/**
 * reverse_array - funcion
 * @a : pointer
 * @n: is a variable
 */
void reverse_array(int *a, int n)
{
	int c;
	int i;
	int j;

	while (a[n] <= n)
	{
		n++;
	}

	c = n;

	for (i = 0, j = c - 1; i < j; i++, j--)
	{
		int ch = i;

		a[i] = a[j];
		a[j] = ch;
	}
}
