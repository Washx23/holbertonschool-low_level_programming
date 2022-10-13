#include "main.h"

/**
 *print_chessboard - function
 *@a: array 
 *
 */

void print_chessboard(char (*a)[8])
{
	int i;

	int b;

	for (i = 0; i <= 7; i++)
	{
		for (b = 0; b <= 7; b++)
		{
			printf("%c", a[i][b]);
		}
		printf("\n");
	}
}
