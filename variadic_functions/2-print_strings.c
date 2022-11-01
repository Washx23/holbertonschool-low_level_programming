#include "variadic_functions.h"

/**
 * print_strings - funcion
 * @n: unsigned int
 * @separator: char
 * Return: always
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *was = 0;
	va_list args;

	va_start(args, n);
	if (!separator)
		separator = "";
	for (; i < n; i++)
	{
		was = va_arg(args, char*);
		if (i == n - 1)
			printf("%s", was);
		else
			printf("%s%s", was, separator);
	}
	printf("\n");
	va_end(args);
}
