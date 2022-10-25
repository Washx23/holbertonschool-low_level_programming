#include "main.h"
#include <string.h>

/**
 * string_nconcat - funcion
 * @s1: pointer
 * @s2: pointer
 * @n: varible
 * Return: always
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a = NULL;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int lens1;
	unsigned int lens2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	lens1 = strlen(s1);
	lens2 = strlen(s2);

	if (n > lens2)
		n = lens2;

	a = malloc(lens1 + n + 1);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < (lens1 + n); i++)
	{
		if (i < lens1)
			a[i] = s1[i];
		else
		{
			a[i] = s2[j];
			j++;
		}
	}
	a[i] = '\0';
	return (a);
}
