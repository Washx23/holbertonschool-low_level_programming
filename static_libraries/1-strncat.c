#include "main.h"

/**
 * *_strncat - funcion
 * @dest: pointer
 * @src: pointer
 * @n: variable
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int p = 0;
	int i = 0;

	for (; dest[i] != '\0' ; i++)
		;
	for (; p < n && src[p] != '\0' ; p++)
	{
		dest[i] = src[p];
		i++;
	}
	return (dest);
}
