#include "main.h"

/**
 * *_strcat - funcion
 * @dest: pointer
 * @src: pointer
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int p = 0;
	int i = 0;

	for (;dest[i] != '\0' ; i++)
		;
	for (;p < n && src[p] != '\0' ; p++)
	{
		dest[i] = src[p];
		i++;
	}
	return (dest);
}
