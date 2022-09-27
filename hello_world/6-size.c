#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int intType;
	float floatType;
	double doubleType;
	char charType;

	printf("Size of an int: 4 bytes\n", sizeof(intType));
	printf("Size of a float: 4 bytes\n", sizeof(floatType));
	printf("Size of long long: 8 bytes\n", sizeof(doubleType));
	printf("Size of a char: 1 byte\n", sizeof(charType));
	printf("Size of long int : 4 byte\n", sizeof(longintType));
	return (0);
}
