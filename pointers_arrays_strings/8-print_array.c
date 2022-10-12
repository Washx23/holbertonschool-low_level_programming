#include "main.h"

/**
 *
 *
 *
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i == n - 1)
			printf("%d", a[i]);
		else		
		{
			a[n] = a[n + 1];
			printf("%d, ", a[i]);
		}
		i++;
	}
	printf("\n");
}
