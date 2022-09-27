#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int intType;
	long long longlongType;
	long longintType;
	char charType;
	float floatType;

	printf("Size of a char: 1 byte(s)\n", sizeof(charType));
	printf("Size of an int: 4 byte(s)\n", sizeof(intType));
	printf("Size of long int: 8 byte(s)\n", sizeof(longintType));
	printf("Size of long long int: 8 byte(s)\n", sizeof(longlongType));
	printf("Size of float: 4 byte(s)\n", sizeof(floatType));
	return (0);
}
