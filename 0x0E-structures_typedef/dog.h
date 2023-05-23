#ifndef HEADER_H
#define HEADER_H

/**
 * struct dog - Dog attributes
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description: Dog's attributes
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - Structure of the dog
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
