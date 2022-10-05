#include "main.h"

/**
 * print_line - funcion
 * Return: result
 * @n: variable
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		--n;
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
