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
	int i, n, q, cont;

	q = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		cont = 0;
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
			{
				q++;
				cont = 1;
			}
		}
		if (cont == 0)
		{
			return (q);
		}
	}

	return (0);
}
