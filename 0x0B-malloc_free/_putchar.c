#include <unistd.h>
#include "main.h"

/**
 * _putchar - Writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1, on error, return -1.
 * And errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
