#include "3-calc.h"

/**
 * main - funcion
 * @argc: integer
 * @argv: intger
 * Return: always
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;

	if (argc)
	{
		if (argc > 4)
		{
			printf("Error\n");
			exit(98);
		}
		if (*argv[3] == '0' || *argv[3] == NULL)
		{
			printf("Error\n");
			exit(100);
		}
		{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);
		printf("%d\n", get_op_func(argv[2])(num1, num2));
		}
	}
	return (0);
}
