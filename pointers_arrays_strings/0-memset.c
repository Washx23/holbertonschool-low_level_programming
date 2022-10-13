#include "main.h"

/**
 * *_memset - funcion
 * @b: variable
 * @s: pointer
 * @n: unsigned variable
 * Return: always
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
