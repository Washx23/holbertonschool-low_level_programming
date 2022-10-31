#include "3-calc.h"
#include <stdio.h>
/**
 *
 *
 *
 *
 *
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;
	
	printf("%s\n", ops[0].op);
	return (ops[0].f);
}
