#include "main.h"

/**
 *
 *
 *
 *
 *
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int c = 0; 

	if (s1[i] == s2[c])
	{
		return 0;
	}
	else if (s1[i] < s2[c])
	{
		return (s1[i] - s2[c]);
	}
	else if (s1[i] > s2[c])
	{
		return (s2[c] - s1[i]);
	}
	return 0;
}
