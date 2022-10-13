#include "main.h"

/**
 * _strspn - funcion
 * @s: pointer
 * @accept: pointer
 * Return: always
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n;
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	for (n = 0; accept[n] != '\0'; n++)
		;
	return (n + 1);
}
