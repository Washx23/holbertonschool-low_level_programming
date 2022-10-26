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
		a = malloc(size * nmemb);
		if (a == NULL)
			return (NULL);
		for (i = 0; i <= nmemb; i++)
		{
			a[i] = 0;
		}
	}
	return (a);
}

