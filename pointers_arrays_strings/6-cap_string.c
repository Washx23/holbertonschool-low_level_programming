#include "main.h"

/**
 * cap_string - funcion
 * @i: pointer
 * Return: always
 *
 */
char *cap_string(char *i)
{
	int p;

	for (p = 0; i[p] != '\0'; p++)
	{
		if (i == 0)
		{
			if (i[p] >= 97 && i[p] <= 122)
			{
				i[p] = i[p] - 32;
			}
		}
		else if (i[p - 1] >= 32 && i[p - 1] <= 47 && i[p - 1] != 45)
		{
			if (i[p] >= 97 && i[p] <= 122)
			{
				i[p] = i[p] - 32;
			}
		}
		else if (i[p - 1] >= 0 && i[p - 1] <= 10)
		{
			if (i[p] >= 97 && i[p] <= 122)
			{
				i[p] = i[p] - 32;
			}
		}
	}
	return (i);
}
