#include "main.h"
int _aux(int n, int i);
/**
 * _sqrt_recursion - funcion
 * @n: variable
 * Return: always
 *
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (_aux(n, 0));
}
/**
 * _aux - funcion 2
 * @n: random variable
 * @i: random varibale 2
 * Return: always
 */
int _aux(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_aux(n, i + 1));
}
