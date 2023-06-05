#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints the name using pointer to function
 * @name: A string to add
 * @f: A pointer to function
 *
 * Return: Void
 **/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
