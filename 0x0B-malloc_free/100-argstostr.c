#include <stdlib.h>
#include "main.h"

/**
 * argstostr - Concatenates all arguments into a single string
 * @ac: Number of arguments
 * @av: Array of argument strings
 * Return: Pointer to the concatenated string
 */

char *argstostr(int ac, char **av)
{
	int i, j, k = 0;
	int total_length = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			total_length++;
			j++;
		}
		total_length++;
	}

	str = malloc(sizeof(char) * (total_length + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			str[k] = av[i][j];
			k++;
			j++;
		}
		str[k] = ' ';
		k++;
	}

	str[k] = '\0';
	return (str);
}
