#include <stdio.h>

/**
 * print_most_numbers - assign
 * Return: Always 0 (Succes)
 */
void print_most_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		if (n != '2' && n != '4')
		{
			putchar(n);
		}
	}
	putchar('\n');
}
