#include "main.h"

/**
 *
 *
 *
 *
 *
 */
void puts_half(char *str)
{
	int c = 0;
	int len = 0;

	while (str[c] != '\0')
	{
		c++;
	}
	len = (c) / 2;	
	
	while (len < c && len != c)
	{
		_putchar(str[len]);
		len++;
	}
	_putchar(10);
}
