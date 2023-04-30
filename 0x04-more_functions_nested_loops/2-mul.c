#include "main.h"

/**
 * _isdigit - Checks if a character is a number or not
 * @x: The number to be checked
 * Return: 1 for a character that is a digit or 0 for anything else
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
