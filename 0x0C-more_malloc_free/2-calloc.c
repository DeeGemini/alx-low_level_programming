#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *_calloc - It allocates memory for an array
 * @nmemb: The number of elements in the array
 * @size: The size of each element
 *
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}

/**
 * *_memset - It fills memory with a constant byte
 * @s: A memory area to be filled
 * @b: A char to copy
 * @n: Number of times to copy b
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
