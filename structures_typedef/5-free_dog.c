#include <stdlib.h>
#include "dog.h"

/**
 *free_dog - the function
 *@d: the pointer
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

