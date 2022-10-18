#include <stdio.h>
#include <stdlib.h>

/**
 *main - funcion
 * @argc: number argument
 * @argv: argument
 * Return: always
 */
int main(int argc, char *argv[])
{
	int i;
	int sum;
	int j;

	for (i = 1 ; argc > i; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] >= 'a' && 'z' >= argv[i][j])
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d", sum);
	printf("\n");
	return (0);
}
