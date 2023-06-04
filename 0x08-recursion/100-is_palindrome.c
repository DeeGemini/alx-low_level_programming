#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: A string to reverse
 *
 * Return: 1 if true, 0 otherwise
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);

	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * check_pal - Checks the characters recursively for palindrome
 * @s: A string to check
 * @i: iterator
 * @len: Length of string
 *
 * Return: 1 if palindrome, 0 otherwise
 */

int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);

	if (i >= len)
		return (1);

	return (check_pal(s, i + 1, len - 1));
}

/**
 * _strlen_recursion - It returns the length of a string
 * @s: A string to calculate the length of
 *
 * Return: Length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
