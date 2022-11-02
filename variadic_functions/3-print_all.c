#include "variadic_functions.h"
/**
 * print_char - function
 * @args: arguments
 *
 * Return: the output of the format
 */
int print_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	return (printf("%c", c));
}
/**
 * print_int - function
 * @args: arguments
 *
 * Return: the output of the format
 */
int print_int(va_list args)
{
	int i;

	i = va_arg(args, int);
	return (printf("%d", i));
}
/**
 * print_float - function
 * @args: arguments
 *
 * Return: the output of the format
 */
int print_float(va_list args)
{
	float f;

	f = va_arg(args, double);
	return (printf("%f", f));
}
/**
 * print_str - function
 * @args: arguments
 *
 * Return: the output of the format
 */
int print_str(va_list args)
{
	char *str = NULL;

	str = va_arg(args, char *);
	if (!str)
		str = "(nil)";
	return (printf("%s", str));
}
/**
 * print_all - function
 * @format: formats
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *sep1 = "";
	char *sep2 = ", ";
	format_t form[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_str},
		{'\0', NULL}
	};

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (form[j].c)
		{
			if (format[i] == form[j].c)
			{
				printf("%s", sep1);
				form[j].f(args);
				sep1 = sep2;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
