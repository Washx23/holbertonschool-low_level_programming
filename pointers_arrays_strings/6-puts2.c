#include "main.h"

/**
 * puts2 - fucion
 * @str: variable
 * Return: always
 */

void puts2(char *str)
{
	while (*str != 'H')
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}
