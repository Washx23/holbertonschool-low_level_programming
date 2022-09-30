#include <stdio.h>

/**
 * main - assign
 * alpHABET exept e and q
 * Return: Always 0 (Succes)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
