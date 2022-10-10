#include "main.h"

/**
 *
 *
 *
 */
void rev_string(char *s)
{
	int n = strlen(s);
	int i = 0; 
	int j = n - 1;

	for (i = 0, j = n -1; i < j; i++, j--)
	{
		char ch = s[i];
		s[i] = s[j];
		s[j] = ch;
	}
}

