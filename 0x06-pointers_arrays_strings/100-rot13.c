#include "main.h"
#include <stdio.h>

/**
 * rot13 - Encoder rot13
 * @s: Pointer to string params
 * Return: *s
 */

char *rot13(char *s)

{
	int i, j;
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
	char current = s[i];
	if (current >= 'A' && current <= 'Z')
	{
	j = current - 'A';
	s[i] = datarot[j];
	}
	else if (current >= 'a' && current <= 'z')
	{
 	j = current - 'a' + 26;
	s[i] = datarot[j];
	}
	}

	return (s);
}
