#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Duplicate to new memory space location
 * @str: char
 *
 * Return: 0
 */

char *_strdup(char *str)
{
	char *aaa;
	int length;

	if (str == NULL)
	return (NULL);

	length = strlen(str);
	aaa = malloc(sizeof(char) * (length + 1));

	if (aaa == NULL)
	return (NULL);

	strcpy(aaa, str);

	return (aaa);
}
