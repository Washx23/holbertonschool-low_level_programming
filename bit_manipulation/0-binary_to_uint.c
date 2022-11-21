#include "main.h"
/**
 * bynary_to_uint - function that converts a binary number to an unsigned int.
 * @b: str
 * Return: num.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int num = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i]; i++;)
	{
		if (b[i] == '1')
			num = num << 1 | 1;
		if (b[i] == '0')
			num = num << 1;
		if (b[i] != '1' && b[i] != '0')
			return (0);
	}
	return (num);
}
