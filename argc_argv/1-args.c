#include <stdio.h>

/**
 *main - funcion
 * @argc: number argument
 * @argv: argument
 * Return: always
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	if (argc)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}

