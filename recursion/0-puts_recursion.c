#include "main.h"

/**
 * _puts_recursion - funcion
 * @s: pointer
 *
 *
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[0]);
	s++;
	_puts_recursion(s);
}
