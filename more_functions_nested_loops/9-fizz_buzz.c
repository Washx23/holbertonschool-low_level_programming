#include "main.h"
/**
 *
 *
 */
int main(void)
{
	int i;

	for ( i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else
			printf("%i ", i);
	}
	return (0);
}
