#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - Creates a new dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Owner of the dog
 *
 * Return: Pointer to the newly created dog structure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_copy;
	char *owner_copy;

	/* Allocate memory for the dog structure */
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	/* Allocate memory and make copies of name and owner */
	name_copy = malloc(strlen(name) + 1);
	if (name_copy == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	strcpy(name_copy, name);

	owner_copy = malloc(strlen(owner) + 1);
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(new_dog);
		return (NULL);
	}
	strcpy(owner_copy, owner);

	/* Assign the copied values to the new dog structure */
	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;

	return (new_dog);
}

