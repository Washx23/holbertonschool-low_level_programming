#include "main.h"

/**
 * print_numbers - numbers
 * Return: Always 0
 */
void print_numbers(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
