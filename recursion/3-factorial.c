#include "main.h"

/**
 * factorial - funcion
 * @n: variable
 * Return: always
 *
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
