#include "main.h"

/**
 *rev_string - funcion
 *@s: is a pointer
 *
 */
void rev_string(char *s)
{
	int c = 0;
	int n;
	int i;
	int j;

	while (s[c] != '\0')
	{
		c++;
	}

	n = c;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		char ch = s[i];

		s[i] = s[j];
		s[j] = ch;
	}
}
