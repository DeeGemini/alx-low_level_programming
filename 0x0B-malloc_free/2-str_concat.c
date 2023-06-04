#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Get ends of input and add them together for size
 * @s1: Input one to concat
 * @s2: Input two to concat
 *
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int len_s1, len_s2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);

	concat = malloc(sizeof(char) * (len_s1 + len_s2 + 1));

	if (concat == NULL)
	return (NULL);

	for (i = 0; i < len_s1; i++)
		concat[i] = s1[i];

	for (j = 0; j < len_s2; j++)
	{
		concat[i] = s2[j];
		i++;
	}

	concat[i] = '\0';

	return (concat);
}
