#include <stdio.h>

/**
 * main - assign
 * tebahpla
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
