#include "main.h"

/**
 * print_sign - print
 * @n: is a number
 * Return: success
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar(0);
	return (0);
}
