#include "main.h"
/**
* _isalpha - print
* @c: polister
* Return: 0 Success
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
