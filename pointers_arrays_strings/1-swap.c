#include "main.h"

/**
 * swap_int - funcion
 * @a: variable
 * @b: variable
 * Return: always
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}


