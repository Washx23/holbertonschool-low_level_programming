#include "main.h"

/**
 * puts2 - fucion
 * @str: variable
 * Return: always
 */

void puts2(char *str)
{
	int i = 0;

	if ( i % 2 == 0)
	{
		while (*str)
		{
			_putchar(*str);
			str = str + 2;
		}
	}
	_putchar('\n');
}
