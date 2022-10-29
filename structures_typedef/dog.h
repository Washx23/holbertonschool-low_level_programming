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
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
