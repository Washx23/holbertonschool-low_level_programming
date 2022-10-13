#include "main.h"

/**
 * string_toupper - funcion
 * @i: pointer
 * Return: always
 *
 */
char *string_toupper(char *i)
{
	int p;

	for (p = 0; i[p] != '\0'; p++)
	{
		if (i[p] <= 'z' && i[p] >= 'a')
		{
			i[p] = i[p] - 32;
		}
	}
	return (i);
}

