#include <stdio.h>

/**
 *main - funcion
 * @argc: number argument
 * @argv: argument
 * Return: always
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int i = 0;

	if (i < argc)
	{
		i++;
		printf("%d\n", i);
	}
	return (0);
}

