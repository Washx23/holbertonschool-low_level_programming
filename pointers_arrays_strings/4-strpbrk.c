#include "main.h"

/**
 * *_strpbrk - funcion
 * @s: pointer
 * @accept: pointer
 * Return: always
 */
char *_strpbrk(char *s, char *accept)
{
	int i, n;

	for (i = 0; s[i]; i++)
	{
		for (n = 0; accept[n]; n++)
		{
			if (s[i] == accept[n])
			{
				return (&s[i]);
			}
		}
	}
	return ('\0');
}
