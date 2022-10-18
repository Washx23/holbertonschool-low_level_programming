#include <stdio.h>

/**
 *main - funcion
 * @argc: number argument
 * @argv: argument
 * Return: always
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

