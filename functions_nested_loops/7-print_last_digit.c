#include "main.h"

/**
 * print_last_digit - funcion
 * @num: number use
 * Return: digit
 */

int print_last_digit(int num)
{
	int digit;

	if (num < 0)
		num = -num;
	digit = num % 10;

	if (digit < 0)
		digit = -digit;

	_putchar(digit + '0');

	return (digit);
}
