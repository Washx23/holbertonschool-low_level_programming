#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function to print name
 * @name: char
 * @f: pointer (function)
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
	{
		(f)(name);
	}
}
