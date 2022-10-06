#include "main.h"

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
