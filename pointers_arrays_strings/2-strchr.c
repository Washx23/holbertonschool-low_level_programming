#include "main.h"

/**
 * *_strchr - funcion
 * @s: pointer
 * @c: varible char
 * Return: always
 */
char *_strchr(char *s, char c)
{
	int i;
	if (c == '\0')
	{
		return '\0';
	}
	for (i = 0; s[i] != c; i++)
		;
	return (&s[i]);
}
