#include "dog.h"
#include <stddef.h>

/**
 * init_dog - initialize a dog structure
 * @d: Dog structure
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Owner of the dog
 *
 * Return: Void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
