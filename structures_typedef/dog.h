#ifndef dog_h
#define dog_h
#include <stdio.h>
/**
 * struct dog - my first structure
 * @name: first member
 * @age: second member
 * @owner: third member
 * Description: structure of dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
