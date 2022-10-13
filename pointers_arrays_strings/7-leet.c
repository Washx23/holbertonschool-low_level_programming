#include "main.h"

/**
 * *leet - funtion
 * @str: pointer
 * Return: always
 *
 */
char *leet(char *str)
{
	int i;
	char s2[5] = {'a', 'e', 'o', 't', 'l'};
	char s3[5] = {'4', '3', '0', '7', '1'};
	int n;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (n = 0; n < 5; n++)
		{
			if (str[i] == s2[n] || str[i] == s2[n] - 32)
			{
				str[i] = s3[n];
			}
		}
	}
	return (str);
}
