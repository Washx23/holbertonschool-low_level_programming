#include "3-calc.h"

/**
 * main - funcion
 * @argc: integer
 * @argv: intger
 * Return: always
 */
int main(int argc, char *argv[])
{
	int (*f)(int a, int b);

	if (argc == 3)
	{
		printf("Error\n");
		exit(98);
	}
	f  = get_op_func(argv[2]);
	if ((*argv[2] == '/' && *argv[3] == 0) || (*argv[2] == '%' && *argv[3] == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", f(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
