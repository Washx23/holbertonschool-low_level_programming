#include <stdio.h>

/**
 * print_most_numbers - assign
 * Return: Always 0 (Succes)
 */
void print_most_numbers(void)
{
	int n = '0';

	while (n <= '9')
	{
		if (n != '2' && n != '4')
		{
			putchar(n);
		}
		n++;
	}
	putchar('\n');
	return (0);
}
