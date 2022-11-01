#include "variadic_functions.h"

/**
 * print_numbers - funcion
 * @separator: string
 * @n: integer
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i = 0;
	unsigned int was = 0;

	va_start(list, n);
	if (!separator)
	{
		separator = "";
	}
	for (; i < n; i++)
	{
		was = va_arg(list, int);
		if (i == n - 1)
			printf("%d", was);
		else
			printf("%i%s", was, separator);
	}
	printf("\n");
	va_end(list);
}
