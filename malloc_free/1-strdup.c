#include "main.h"
char *_strcpy(char *dest, char *src);
/**
 * _strdup - funcion
 * @str: pointer
 * Return: always
 */
char *_strdup(char *str)
{
	char *a = NULL;
	int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
		;
	a = malloc(i + 1);
	if (a == NULL)
		return (NULL);
	a = _strcpy(a, str);
	return (a);
}

/**
 * *_strcpy - funcion
 * @src: pointer
 * @dest: pointer
 * Return: always
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
