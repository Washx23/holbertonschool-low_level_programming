#include "main.h"

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
