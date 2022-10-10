#include "main.h"

/**
 * _puts - fucion
 * @str: variable
 * Return: always
 */

void puts2(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}
