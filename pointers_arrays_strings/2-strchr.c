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

	for (i = 0; s[i] != '\0'; i++)
	{
		if (c == s[i])
		{
			return (&s[i]);
		}
	}
	if (c == s[i])
	{
		return (&s[i]);
	}
	return (NULL);
}
