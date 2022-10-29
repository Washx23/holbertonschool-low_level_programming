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
	if (modok == NULL)
	{
		free(modok);
	}

	if (modok != NULL)
	{
		if (modok->name == NULL)
		{
			free(modok);
			return (NULL);
		}
		else 
			modok->name = strdup(name);

		if (modok->owner == NULL)
		{
			free(modok->name);
			free(modok);
			return (NULL);
		}
		else 
			modok->owner = strdup(owner);
		modok->age = age;
	}
	return (modok);
}
