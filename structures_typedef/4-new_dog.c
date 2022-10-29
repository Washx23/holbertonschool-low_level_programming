#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 *new_dog - creates modok the destructor
 *@name: the name of the dog
 *@age: the age of the dog
 *@owner: the owner of the dog/s
 *Return: modok the destructor
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *modok = NULL;

	modok = malloc(sizeof(dog_t));

	if (modok != NULL)
	{
		modok->name = strdup(name);
		if (modok->name == NULL)
		{
			free(modok);
			return (NULL);
		}
		modok->owner = strdup(owner);
		if (modok->owner == NULL)
		{
			free(modok);
			return (NULL);
		}
		modok->age = age;
	}
	if (modok == NULL)
	{
		free(modok);
	}
	return (modok);
}
