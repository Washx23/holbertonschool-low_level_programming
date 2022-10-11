#include "main.h"

/**
 * puts2 - fucion
 * @str: variable
 * Return: always
 */

void puts2(char *str)
{
	int i = 0;
	int cont = _strlen(str);

	for (; i < cont; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
/**
 * _strlen - fucion
 * @s: variable
 * Return: always
 */

int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;
	return (c);
}
