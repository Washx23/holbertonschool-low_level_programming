#include "main.h"

/**
 * is_prime_number - funcion
 * @n: variable
 * Return: always
 *
 */
int is_prime_number(int n)
{
	if (n / 3 == 1 || n / 2 == 1)
	{
		return (1);
	}
	else if (n % 3 == 0 || n % 2 == 0 || n % 5 == 0)
	{
		return (0);
	}
	else if (n <= 1)
	{
		return (0);
	}
	else if (n > 0)
	{
		return (1);
	}
	return (0);
}
