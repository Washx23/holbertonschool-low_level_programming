#include "main.h"

/**
 * malloc_checked - funcion check malloc fail.
 * @b: integer possitive
 * Return: always
 *
 *
 */
void *malloc_checked(unsigned int b)
{
	int *s = NULL;

	s = malloc(b);

	if (s == NULL)
		exit(98);
	return (s);
}
