#include <stdio.h>
#include <stdlib.h>

/**
 *main - funcion
 * @argc: number argument
 * @argv: argument
 * Return: always
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	int p;
	int q;

	if (argc < 3)
	{
		printf("Error\n");
	}
	else
	{
		p = atoi(argv[1]);
		q = atoi(argv[2]);

		printf("%d\n", p * q);
	}
	return (0);
}
