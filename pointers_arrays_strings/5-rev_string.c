#include "main.h"

/**
 *
 *
 *
 */
void rev_string(char *s)
{
	int n = _strlen(s);
	int i = 0; 
	int j = n - 1;

	for (i = 0, j = n -1; i < j; i++, j--)
	{
		char ch = s[i];
		s[i] = s[j];
		s[j] = ch;
	}
}

int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;
	return (c);
}


