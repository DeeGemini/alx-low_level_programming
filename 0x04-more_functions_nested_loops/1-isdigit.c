#include "main.h"

/**
 * _isdigit - Checks if the character is a digit or not
 * @x: The number to be checked
 * Return: 1 for a digit character or 0 for anything else
 */

int _isdigit(int x)

{
	if (x >= 48 && x <= 57)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
