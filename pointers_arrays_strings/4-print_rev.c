#include "main.h"

/**
 * print_rev - funcion
 * @s: variable
 * Return: always
 */
void print_rev(char *s)
{
	int c;

	c = 0;

	while (*s)
	{
		c++;
		s = s + 1;
	}
	while (c > 0)
	{
		s = s - 1;
		_putchar(*s);
		c--;
	}
	_putchar('\n');
}

