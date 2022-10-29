#include <stdio.h>
#include "dog.h"

/**
 * print_dog - funcion
 * @d: varibale
 *
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
	if (d->name != NULL)
		printf("Name: %s\n", d->name);
	else if (d->name == NULL)
		printf("Name: (nil)\n");
	printf("Age: %.6f\n", d->age);
	if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);
	else if (d->owner == NULL)
		printf("Owner: (nil)\n");
	}
}
