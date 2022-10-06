#include "main.h"

/**
 * _puts - fucion
 * @str: variable
 * Return: always
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str = str + 1;
	}
	_putchar('\n');
}
