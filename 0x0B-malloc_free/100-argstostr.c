#include <stdlib.h>
#include "main.h"

/**
 * argstostr - Concatenates all the arguments of a program.
 * @ac: The number of arguments.
 * @av: An array of strings containing the arguments.
 *
 * Return: A pointer to the concatenated string, or NULL if it fails.
 */

char *argstostr(int ac, char **av)
{
	int i, len, total_length = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len])
		len++;
		total_length += len + 1;
	}

	str = malloc(sizeof(char) * total_length + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len])
		{
		str[k] = av[i][len];
		len++;
		k++;
		}
	str[k] = '\n';
	k++;
	}

	str[k] = '\0';

	return (str);
}
