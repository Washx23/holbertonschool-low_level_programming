#include "main.h"

/**
 * _calloc - malloc-like function that initializes to '0
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: always
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *a = NULL;

	if (nmemb)
	{
		a = malloc(sizeof(char) * nmemb);
		if (a == NULL)
			return (NULL);
		for (i = 0; i < size; i++)
		{
			a[i] = 0;
		}
	}
	return (a);
}

