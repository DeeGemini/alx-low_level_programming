#include "main.h"

/**
 * _puts_recursion - print a string using recursion.
 * @q: the string to print
 *
 * Return: void
 */

void _puts_recursion(char *q)
{
	if (*q == '\0')
	{
		_putchar('\n');
		return;
		/* to terminate the function when the string is reached */
	}

	_putchar(*q++);
	_puts_recursion(q);
}
