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
		return (-13);
	}
	else if (s1[i] > s2[c])
	{
		return (13);
	}
	return 0;
}
