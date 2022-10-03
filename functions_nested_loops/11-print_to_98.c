#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - funcion
 * @n: character
 * Return: success
 */
void print_to_98(int n)
{
	if (n > 0)
	{
		while (n <= 97)
		{
			printf("%i, ", n++);
		}
		printf("%i\n", n);
	}
	else if (n < 0)
	{
		while (n >= 97)
		{
			printf("%i, ", n--);
		}
	}
	printf("%i\n", n);
}

