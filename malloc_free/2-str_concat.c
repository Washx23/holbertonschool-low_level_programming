#include "main.h"
char *_strcat(char *dest, char *src);
int _strlen(char *s);
/**
 * str_concat - funcion
 * @s1: pointer
 * @s2: pointer 2
 * Return: always
 */
char *str_concat(char *s1, char *s2)
{
	char *a = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	a = malloc(_strlen(s1) + _strlen(s2) + 1);
	if (a == NULL)
		return (NULL);
	a = _strcat(a, s1);
	a = _strcat(a, s2);
	return (a);
}

/**
 * *_strcat - funcion
 * @dest: pointer
 * @src: pointer
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int p;

	for (i = 0; dest[i] != '\0' ; i++)
		;
	for (p = 0; src[p] != '\0' ; p++)
	{
		dest[i] = src[p];
		i++;
	}
	return (dest);
}
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
